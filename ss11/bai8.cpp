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

    
    int maxCount = 0;   
    int mostValue = a[0]; 

    for (int i = 0; i < n; i++) {
        int count = 0;

        
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        
        
        if (count > maxCount) {
            maxCount = count;
            mostValue = a[i];
        }
    }

   
    printf("\nPhan tu xuat hien nhieu nhat la: %d\n", mostValue);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}

