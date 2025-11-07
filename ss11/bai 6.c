#include <stdio.h>

int main() {
    int a[100];
    int n;


    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu!\n");
        return 0;
    }


    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("phan tu trong mang [%d] = ", i);
        scanf("%d", &a[i]);
    }


    int max1, max2;

    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }

  
    for (int i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

   
    if (max1 == max2) {
        printf("Khong co phan tu lon thu hai trong mang (tat ca phan tu bang nhau).\n");
    } else {
        printf("\nPhan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }

    return 0;
}

