#include <stdio.h>

void almashtir(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
   
}

int main(){
    int a, b;
    printf("Sonlarni kiriting: ");
    scanf("%d %d", &a, &b);
    almashtir(&a, &b);
    printf("a=%d  b=%d\n", a, b);
    return 0;
}
