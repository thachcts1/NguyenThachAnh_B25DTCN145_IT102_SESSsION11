#include <stdio.h>

int main (){
	int choice,size,arrayNumber[100],indexAdd,valueAdd,
		indexDelete,indexUpdate,valueUpdate , findNumber ;
	int sum  = 0 ;
	float avg ; 
	int flag07 = 0;
	do {
		// Code 
		printf("\n1.	Nhap so luong phan tu va gan gia tri cho mang\n");
		printf("2.	Hien thi mang\n");
		printf("3.	Tinh tong cac phan tu trong mang\n");
		printf("4.	Them phan tu vao vi tri bat ky\n");
		printf("5.	Xoa phan tu o vi tri bat ky\n");
		printf("6.	Cap nhat gia tri tai vi tri bat ky\n");
		printf("7.	Tim kiem phan tu trong mang bang thuat toan \n");
		printf("8.	Sap xep tang dan \n");
		printf("9.	Tinh hieu so cua so lon nhat va so nho nhat \n");
		printf("10.	Thoat chuong trinh\n");
		printf("Moi ban nhap lua chon :");
		scanf("%d", &choice);
		switch(choice){
			case 1 :
				printf("Nhap so luong phan tu cua mang :");
				scanf("%d",&size);
				
				// Dung vong lap de lay cac phan tu tu nguoi dung nhap
				for(int i = 0;i<size;i++){
					printf("Phan tu arr[%d] = ",i);
					scanf("%d",&arrayNumber[i]);
				}
				break;
			case 2 :
				// Duyet qua mang bang vong lap for
				for(int i = 0 ; i < size ; i ++){
					printf("Phan tu arr[%d] = %d \n",i,arrayNumber[i]);
				}
				break;
			case 3 :
				// Duyet qua mang cong tung phan tu trong mang
				for(int i = 0 ; i < size ; i++){
					sum = sum + arrayNumber[i];
				}
				avg = (float)sum / size;
				printf("Tong cua mang la :%f",avg);
				break;
			case 4 :
				// Nhap chi so index muon chen 
				printf("Moi ban nhap vi tri muon chen :");
				scanf("%d",&indexAdd);
				
				// Nhap phan tu muon chen
				printf("Moi ban nhap gia tri muon chen :");
				scanf("%d",&valueAdd);
				
				// Duyet qua vong lap bat dau tu vi tri nguoi nhap chay cho den cuoi mang
				for(int i = size ; i > indexAdd ; i --){
					arrayNumber[i]  = arrayNumber[i-1];
				}
				
				// Cap nhat size 
				size++;
				
				// Cap nhat gia tri
				arrayNumber[indexAdd] = valueAdd;
				
				
				// Lan 1 : i = 5 ; 5 > 1 ;  arrayNumber[5] = arrayNumber[4] ; i = 4
				// Lan 2 : i = 4 ; 4 > 1 ; arrayNumber[4] = arrayNumber[3]
				// ...
				// Lan i = 2 ;	arrayNumber[2] = arrayNumber[1]
			break;
			case 5 :
				printf("Moi ban nhap chi so index muon xoa");
				scanf("%d",&indexDelete);
				// Giam size cua mang
				size--;
				
				// Duyet qua mang bat dau tu vi tri muon xoa -> cuoi mang
				for(int i = indexDelete; i < size; i++){
					arrayNumber[i] = arrayNumber[i+1];
				}
				// Lan 1 : i = 2 ; 2 < 4 ; arrayNumber[2] = arrayNumber[3]; i = 3
				// Lan 2 : i = 3 ; 3 < 4 ; arrayNumber[3] = arrayNumber[4]; ; i = 4
				break;
			case 6 :
				printf("Nhap index tai vi chi muon cap nhat :");
				scanf("%d",&indexUpdate);
				printf("Nhap gia tri muon cap nhat :");
				scanf("%d",&valueUpdate);
				
				arrayNumber[indexUpdate] = valueUpdate;
				break;
			case 7 : 
				printf("Nhap gia tri muon tim kiem :");
				scanf("%d",&findNumber);
				// Duyet qua mang tim kiem 
				for(int i = 0 ; i < size ; i++){
					if(findNumber == arrayNumber[i] ){
						printf("Tim thay gia tri tai %d\n",i);
						flag07 = 1;
					}
				}
				if(flag07 == 0){
					printf("Ko tim thay gia tri");
				}
				break;
			case 9 : 
				// Bubble Sort	
				for(int i = 0 ; i < size ; i++){
					for(int j = 0 ; j < size - 1 - i ; j++){
						if(arrayNumber[j] > arrayNumber[j+1]){
							int temp = arrayNumber[j];
							arrayNumber[j] = arrayNumber[j+1];
							arrayNumber[j+1] = temp ;
						}
					}
				}
				break;
				// Lan 1 (i): 
					// Lan 1(j):
					// Lan 2(j):
				// Lan 2 (i): 
					// Lan 1(j):
					// Lan 2(j):
			case 11 : 
					
				for(int i = 0 ; i < size ; i++){
					int indexMin = i ; 
					for(int j = i + 1 ; j < size ; j ++ ){
						if(arrayNumber[indexMin] > arrayNumber[j]){
							indexMin = j;
						}
					}
						int temp = arrayNumber[indexMin];
						arrayNumber[indexMin] = arrayNumber[i];
						arrayNumber[i] = temp ;
				}
				break;
			case 12 : {
				int findNumber02 = 5;
				int left = 0 ; right = size - 1; 
				while (left <= right){
					int mid = (left + right) / 2;
					if(mid == findNumber02) {
						printf("indexasdjas");
						break;
					} else if (mid > findNumber02) {
						right = mid - 1;
					} else if (mid < findNumber02) {
						left = mid + 1;
					}
				}
				break;
			}
				
		}
		
		
	} while(choice != 10);
	
	return 0; 
}
