#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid; // Kitob topildi, indeksini qaytaradi
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Kitob topilmasa
}

int main() {
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270
    };
    
    int target;
    scanf("%d", &target);
    
    int index = binary_search(books, 12, target);
    
    if (index != -1) {
        printf("Kitob topildi!\nIndeks: %d\n", index);
    } else {
        printf("Kitob topilmadi\n");
    }
    
    return 0;
}
