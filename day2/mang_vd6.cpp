//demo khai bao luoi+day giá tri khoi tao
//mang int: khoi tao dat trong {v1, v2, v3}
//rieng char array: chuoi ki tu, ngoai khai bao {} thi con dung: "noi dung chuoi"
#include<stdio.h>
#include<string.h>
int main(){
	int A[]={100,200,50,30,10,99,333};
	
	int n=sizeof(A)/sizeof(A[0]);
	printf("Liet ke cac gia tri trong mang A:\n");
	for(int i=0; i<n; i++){
		printf(" A[%d] = %d\n",i,A[i]);
	}
	
	char B[]={'A',66,67,68,97,98,99,100,0}; //KHAI BAO THEO KIEU MANG A: MET MOI, KHO NHIN
	//'A' là kí tu 'A' dong thoi cung la so nguyen 65
	printf("test A la %c =so=> %d, so 65==so=>%d  ==kitu=>%c\n",'A','A',65,65);
	n=sizeof(B)/sizeof(B[0]);
	printf("Liet ke cac gia tri trong mang B:\n");
	for(int i=0; i<n; i++){
		printf(" B[%d] = %c\n",i,B[i]);
	}
	
	printf("in xau B: %s\n",B);
	char C[] = "ABCDabcd";  //KHAI BAO NHANH, DE NHIN
	printf("in xau C: %s\n",C);
	//SU DUNG TOAN TU 3 NGOI ?: DE XEM B==C VE NOI DUNG?
	printf("ket qua so sanh B vs C: %s\n",strcmp(B,C)==0?"GIONG NHAU NOI DUNG":"KHAC NHAU ND");
}
