//lam viec voi array:
//nhap mang n phan tu so nguyen, tinh tong cac so chan
#include<stdio.h>
int main(){
	int n; //luu so luong phan tu trong mang
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d",&n);
	}while(n<=0);
	
	int A[n]; //dc cap phat n o nho, x 4 = nx4 bytes;   	
   	//printf("so luong pt dc cap phat %d == %d",sizeof(A)/sizeof(int),n);   	
   	
   	printf("Hay nhap %d so nguyen: ",n);
   	for(int i=0;i<n;i++){
   		//printf(" A[%d]=",i);  //xem dc nhan cua du lieu chuan bi nhap
		scanf("%d",&A[i]);
	}
	
	int tong=0;
	for(int i=0; i<n; i++){ //2 vong for: i tang lan luot tu 0 (index min) -> n-1 (index max)
   		if(A[i]%2 == 0)tong += A[i];  // tong = tong + A[i]
	}
	
	printf("Tong gia tri cac phan tu chan = %d",tong);
}
