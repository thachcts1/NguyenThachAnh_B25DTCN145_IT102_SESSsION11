#include <stdio.h>
#include <string.h>

int main() {
    
    char ds[][20] = {"apple", "banana", "orange", "grape", "mango"};
    int n = sizeof(ds) / sizeof(ds[0]); 

    char x[20];   
    int found = 0; 

    
    printf("Danh sach cac chuoi trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", ds[i]);
    }

   
    printf("\nNhap chuoi can tim: ");
    scanf("%s", x);

 
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i], x) == 0) { 
            printf("Tim thay chuoi '%s' tai vi tri %d.\n", x, i);
            found = 1;
            break; 
        }
    }

  
    if (!found) {
        printf("Khong tim thay chuoi '%s' trong mang.\n", x);
    }

    return 0;
}

