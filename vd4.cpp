//lam viec voi toan tu bit & | ^
#include<stdio.h>
int main(){
	printf("test toan tu bit\n");
	int a=5, b=4;
	int c = a & b; // a=5=0101, b=4=0100   a&b: thuc hien phep AND theo tung cap bit: 
//	
//	0101
//	0100
//	-----
//	0100  = 4
    printf("a=%d, b=%d, c=a&b=%d\n",a,b,c);
    a=7; b=8; c=a&b;  //a=7=0111  b=8=1000
//    0111
//    1000
//    ----
//    1111
	int d=a|b;  // phep OR theo tung cap bit d=1111(b) = 15
    printf("a=%d, b=%d, c=a&b=%d, d=a|b=%d\n",a,b,c,d);
    a=10; b= 20; c=a&b; d=a|b; //a=10(D)=1010(B); b=20=0001 0100; c=
//    0000 1010
//    0001 0100
//    ---1-1110 c=0, d=30
    
    printf("a=%d, b=%d, c=a&b=%d, d=a|b=%d\n",a,b,c,d);
    a=30; b=10; c=a&b; d=a|b;
    printf("a=%d, b=%d, c=a&b=%d, d=a|b=%d\n",a,b,c,d);
//    0001 1110
//    0000 1010
//       1 1110==d=30 
//         1010==c=10(D)

    a=206; //1100 1110
    b=a & 0x0f; //clear 4 bit cao, giu lai 4 bit cuoi 0000 1110 = 14
//    0x0f = 0000 1111
//           xxxx yyyy
//           0000 yyyy
    printf("a=%d, b=%d\n",a,b);
    
    //a=206; //1100 1110
    a=66;  //0100 0010
    
    //a&0x80 : a & 1000 0000 
    b = a & 0x80;
    printf("a=%d b = a & 0x80 = %d\n",a,b);
	if (a & 0x80) { //neu bit 7 of a == 1 
		printf("bieu thuc dung: if chay\n");
	}else{
		printf("bieu thuc SAI: ELSE chay\n");
	}    
	
	a=7; b=10; c=a^b;   //true table XOR: 1+1=0; 0+0=0; 1+0=0+1=1
	//  7=0111 
	// 10=1010
	//xor=1101 ==13
	printf("test XOR: a=%d, b=%d, c=a^b=%d\n",a,b,c);	
	   
	a=2;     //a=   0000 0010
	b=a<<3;  //b=   0001 0000 
	printf("test dich trai: a=%d, b=a<<3 = %d\n",a,b);	
	a=10;   //1010   => b=0000
	b=a>>4; //dich phai a 4bit
	printf("test dich phai: a=%d, b=a>>4 = %d\n",a,b);	
	
	a=10>2?100:200;
	printf("sau khi toan tu 3 ngoi: a=%d\n",a);
}
