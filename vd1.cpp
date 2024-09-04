#include<stdio.h>
int main(){
	printf("xin chao\n");
	double b=9.99; //ko ep
	int c=b;//ep kieu tu dong c=9
	int d=(int)b;//ep kieu chu dong
	printf("gias tri bien b=%f\n",b);
	printf("gias tri bien c=%d\n",c);
	printf("gias tri bien d=%d\n",d);
	//khi nao dung ep chu dong
	int x=10, y=4;
	double z=x/(double)y; 
	//nguyen/nguyen=>nguyen : qui luat cua C
	//nguyen/thuc => thuc
	//thuc/thuc => thuc
	printf("gias tri bien z=%f\n",z);
	int aa=1234789;
	double bb=1/aa; //bb =?  : ZERO
	printf("gias tri bien bb=%f\n",bb);
	
	unsigned char cc = 'B';//gán kí t? B cho bi?n c || c nhan mã ascii cua kí tu B
	printf("gias tri bien char cc=%d\n",cc);
	cc=cc+1;  //cc ==66+1=67 ascii code of 'C'
	printf("cc is ascii code %d, ascii : %c\n",cc,cc);
	cc=200;  //not max over +255
	printf("cc is la so nguyen: %d\n",cc);
	int dd=44609; //1010 1110 0100 0001 ; 8 bit cuoi =0100 0001 =65
	printf("dd=%d, ascii of %d = %c\n",dd,dd,dd); //ep kieu tu dong int=>char
	char zz=(char)dd; //Mat byte cao, con lai byte thap (8 bit cuoi)
	printf("zz=%d, ascii of %d = %c\n",zz,zz,zz);
	return 0;
}
