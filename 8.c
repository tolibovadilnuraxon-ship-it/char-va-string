#include <stdio.h>

int main(){
    int narxlar, count=0;
    FILE *f = fopen("xaridlar.txt", "r");
    
    if (f == NULL) {
        printf("Ushbu fayl mavjud emas!");
        return 1;
    }

    for(int i=0; i<5; i++){
        if (fscanf(f, "%d", &narxlar) == 1) {
        if(narxlar > 50000){
            count++;
        }
    }
}
    printf(" %d ta mahsulotning narxi 50000 ming so'mdan yuqori", count);
}
