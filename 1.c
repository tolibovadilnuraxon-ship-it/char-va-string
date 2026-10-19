#include <stdio.h>

int main() {
    int seats[10];
    int n;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &seats[i]);
    }

    scanf("%d", &n);

    if (seats[n] == 0) {
        printf("Joy mavjud\n");
    } else {
        printf("Joy band\n");
    }

    return 0;
}
