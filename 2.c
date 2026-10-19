#include <stdio.h>

double chegirma(double narx) {
    return narx * 0.9;
}

int main() {
    double mahsulotlar[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &mahsulotlar[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%.0lf", chegirma(mahsulotlar[i]));
        if (i < 4) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
