#include <stdio.h>

void rekursiya (int n){
    printf("%d\n ", n);

    if(n > 1){
        rekursiya(n-1);
    }
}
int main(){
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    rekursiya(n);
}
