#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int so = 0;               
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            so = 1; 
        }
    }
    if (!so) {
        printf("Mang khong chua so chan.");
    }
    printf("\n");
    return 0;
}

