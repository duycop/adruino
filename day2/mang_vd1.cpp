//lam viec voi array
#include<stdio.h>
int main(){
	int z=12345;
	int j=1111;
	//A[1]=100; //sai vi dung truoc khi khai bao
	int A[5];  // mang  A co 5 phan tu, total size=5*sizeof(int)=20 byte
	int k=2222;
	
	A[0] = 100;  //gán giá tri 100 cho phan tu dau tien of array A
	A[1] = 99;
	A[2] = 1000;
	A[3] = 88;
	A[4] = 10;  //4 dòng này thay doi gia tri các phan tu trong mang	  
	
	//du thua, ngoai mang: 	
	
	printf("Bien int j co kich thuoc %d\n",sizeof(j));
	printf("Mang ten A co kich thuoc %d\n",sizeof(A));
	printf("Bien int k co kich thuoc %d\n",sizeof(k));
	
	printf("dia chi bien z: %p\n",(void*)(&z));
	printf("dia chi bien j: %p\n",(void*)(&j));
	printf("dia chi bien A: %p\n",(void*)(A));
	printf("dia chi bien A0 %p\n",(void*)(&A[0]));
	printf("dia chi bien A4 %p\n",(void*)(&A[4]));
	printf("dia chi bien k: %p\n",(void*)(&k));
	printf("dia chi bien A5 %p\n",(void*)(&A[5]));
	printf("dia chi bien A6 %p\n",(void*)(&A[6]));
	printf("dia chi bien A7 %p\n",(void*)(&A[7]));
	printf("dia chi bien A8 %p\n",(void*)(&A[8]));
	printf("dia chi bien A9 %p\n",(void*)(&A[9]));
	printf("dia chi bienA10 %p\n",(void*)(&A[10]));
	
	printf("gia tri z=%d, j=%d, k=%d\n",z,j,k);
	
	//su dung 1 vong lap: duyet qua cac chi so: Có tính chat lien ke nhau
	printf("Liet ke cac gia tri trong mang A:\n");
	for(int i=0; i<5; i++){  //sua doi can tren vong lap: Van print ra dc kq du thua trong mang
		printf(" A[%d] = %d\n",i,A[i]);
	}
	A[9] = 2024;  // gan ntn co nguy hiem ko?
	A[5] = 5555;   //ngoai mang: ghi de vao 1 bien nao do -> j bi thay doi 1111 =>5555
	printf("gia tri z=%d, j=%d, k=%d   A5=%d\n",z,j,k,A[5]);
	j=44444;
	printf("gia tri z=%d, j=%d, k=%d   A5=%d\n",z,j,k,A[5]);
	
	//khi truy xuât ngoai mang: nguy hiem khi WRITE de gia tri vao o nho ngoai mang
	//vi o nho se trung voi 1 bien nao do, bien nay dang co 1 logic nao do
	//logic bi thay doi => chuong trinh mat kiem soat => nguy hiem
	//co tinh kiem soat no' A5 +> de` j : hacked thanh cong
}
