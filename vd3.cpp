//cach hien thi so phay dong
#include<stdio.h>
int main(){
	float a=3.14;   //4 byte: ko ch�nh x�c bang
	double b=3.14;  //8 byte: ch�nh x�c hon
	
	printf("a=%f kich thuoc =%d bytes\n",a,sizeof(a));
	printf("a=%f kich thuoc =%d bytes\n",b,sizeof(b));
	
	double z=3500e6;
	printf("z=%e\n",z);
	double epsilon = 1e-4; //10^-4 so rat be
	printf("gia tri epsilon =%e = %f\n",epsilon,epsilon);
}
