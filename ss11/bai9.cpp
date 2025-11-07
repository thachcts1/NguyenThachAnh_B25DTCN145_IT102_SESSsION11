#include <stdio.h>

int main() {
    int a[100];
    int n;

    
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Mang rong!\n");
        return 0;
    }


    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
             
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;  
                j--;  
            }
        }
    }

 
    printf("\nMang sau khi loai bo trung lap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

