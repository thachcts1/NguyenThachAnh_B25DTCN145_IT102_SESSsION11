#include <stdio.h>

int main() {
    int n;
    int price[100];

    printf("Nhap so thang: ");
    scanf("%d", &n);


    printf("Nhap gia co phieu theo tung thang:\n");
    for (int i = 0; i < n; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%d", &price[i]);
    }

    int buyPrice = price[0];
    int minLoss = 0; 
    int sellMonth = -1; 

    int foundLoss = 0; 


    for (int i = 1; i < n; i++) {
        int profit = price[i] - buyPrice;

        if (profit < 0) { 
            if (!foundLoss || profit > minLoss) { 
                minLoss = profit;
                sellMonth = i + 1; 
                foundLoss = 1;
            }
        }
    }


    if (foundLoss)
        printf("\nBan nen ban vao thang %d de lo it nhat (lo %d)\n", sellMonth, -minLoss);
    else
        printf("\nBan khong bi lo o bat ky thang nao (toan lai!)\n");

    return 0;
}

