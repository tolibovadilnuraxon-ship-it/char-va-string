#include <stdio.h>

struct Xodim {
    char ismi[50];
    int soati;
};

int main() {
    FILE *f = fopen("xodimlar.txt", "r");
    if (f == NULL) return 1;

    int n;
    if (fscanf(f, "%d", &n) != 1) {
        fclose(f);
        return 1;
    }

    struct Xodim x;

    for (int i = 0; i < n; i++) {
        if (fscanf(f, "%s %d", x.ismi, &x.soati) != 2) break;
        printf("%s: %d som\n", x.ismi, x.soati * 15000);
    }

    fclose(f);
    return 0;
}
