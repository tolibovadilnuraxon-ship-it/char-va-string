#include <stdio.h>

struct Mahsulot{
    char nom[20];
    int narx;
    int miqdor;
};

int main(){
    struct Mahsulot m1;
    printf("Mahsulot nomi: ");
    scanf("%s", m1.nom);

    printf("Narx: ");
    scanf("%d", &m1.narx);

    printf("Miqdori: ");
    scanf("%d", &m1.miqdor);

    printf("Mahsulot nomi: %s\n", m1.nom);
    printf("Narxi: %d\n", m1.narx);
    printf("Miqdori: %d\n", m1.miqdor);
    printf("Ombor qiymati: %d\n", m1.narx * m1.miqdor);
}
