#include <stdio.h>

int main() {
 
    int a[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(a) / sizeof(a[0]); 
    int x;  // Giá tr? c?n t?m
    int left = 0, right = n - 1, mid;
    int found = 0;

    printf("Mang da duoc sap xep theo thu tu tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\nNhap phan tu can tim: ");
    scanf("%d", &x);

    
    while (left <= right) {
        mid = (left + right) / 2;

        if (a[mid] == x) {
            printf("Tim thay phan tu %d tai chi so %d\n", x, mid);
            found = 1;
            break;
        } 
        else if (a[mid] < x) {
            left = mid + 1; 
        } 
        else {
            right = mid - 1; 
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }

    return 0;
}

