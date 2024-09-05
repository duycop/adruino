//note: phan biet strlen vs sizeof  : tinh do dai xau   vs  tong kich thuoc dc cap phat
#include<stdio.h>
#include<string.h>
int main(){
	char mk[]="12345"; //khai bao luoi, nhanh 1 xau ki tu, luon co '\0' o cuoi cung
	printf("mang mk dc cap phat: %d, strlen = %d",sizeof(mk), strlen(mk));
	//strlen tra ve do dai cua du lieu (ko tinh '\0')
	//sizeof tinh so luong phan tu dc cap phat : sizeof + strlen + 1
	
	char x1[3]="12345"; //[Error] initializer-string for array of chars is too long
	char x2[5]="12345"; //[Error] initializer-string for array of chars is too long
	char x3[6]="12345"; //ok
	char x4[66]="12345"; //ok
}
