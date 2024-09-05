#include<stdio.h>
#define PI 3.14
//khi dung macro define: no chi la replace truoc khi bien dich => luon dung (A) phan replace
#define max(A,B) (A)>(B)?(A):(B)
#define bp(A) (A)*(A)
int main(){
	int a=100;
	
	//quên toan tu so sanh bang(==) => gán (=)
	if(a==11){ 
		printf("a is elevent\n");
	}else{
		printf("a is not 11\n");
	}
	
	printf("ngoai if: a=%d\n",a);
	
	//loi khi ko su dung dau ngoac hop ly: x=1/(2a)  => thanh phan MAU a nhay len TU
	float x=1.0/(2*a);  //error float x=1/2*a  //2 bug: bug1: int/int; bug2: ko dùng ngoac
	printf("x=1/2a=%f\n",x);
	printf("so pi = %f\n",PI);
	printf("macro: max of 50 , 10 = %d\n",max(50,10));
	printf("macro: bp 5 = %d\n",bp(5));
	printf("macro: bp(6-1) = %d\n",bp(6-1)); // tai sao??
	printf("macro: bp(8-3) = %d\n",bp(8-3)); // tai sao??
	
	//macro: is replace befor compiler
	//bp(6-1)  => 6-1*6-1 = -1
	//bp(8-3)  => 8-3*8-3 = -19
	
	//Loi logic: tran max
	unsigned char t=255; //t is max 8 bit
	t++;
	printf("t=%d\n",t); // over => zero  256=1 0000 0000: co 8 bit cuoi = 0000 0000==zero
	
	
}
