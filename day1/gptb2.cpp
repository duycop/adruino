//giai phuong trinh bac 2
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("APP GIAI PTB2\n");
	printf("nhap 3 he so a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	//printf("test kq scanf nhap dc 3 he so a=%f,b=%f,c=%f\n",a,b,c);
	float d;
	d=b*b-4*a*c;
	if(d<0)
		printf("ptb2 ko co nghiem thuc");
	else if(d==0){
		float x=-b/(2*a);
		printf("ptb2 co nghiem 2 thuc x1=x2=%f",x);
	}else{
		float x1=(-b-sqrt(d))/(2*a);
		float x2=(-b+sqrt(d))/(2*a);
		printf("ptb2 co nghiem 2 thuc\n x1=%f\n x2=%f",x1,x2);
		//(x-2)(x-2)==0 <=>  x^2-4x+4=0  => nghiem kep x1=x2=2
	}
}
