//liet ke cac so nguyen la nt 1..100
#include<stdio.h>
#include<math.h>

bool is_snt(int n){
	//kiem tra so nguyen n co phai snt: phai => true else: false
	//thuat toan: neu n ko phai la snt tuc la n la hop so n=a*b, 1<a<=b
	//a max = b xay ra khi n=a*a=b*b => amax = can bac 2 of n
	//n la snt: ko tim dc cap a,b nao ma 1<a<=b : a*b=n
	int amax=sqrt(n);
	printf("kt xem %d co phai snt?\n",n);
	for(int a=2;a<=amax; a++){
		if(n%a==0) //neu n chia lay du cho a: du 0 <=> chia het:  a la 1 thanh phan trong hop so a*b==n
		{
			printf(" thu chia %d/%d ket qua chia het => %d ko phai snt ma la hop so %d=%d*%d\n",n,a,n,n,a,n/a);
			return false;
		}
		
		printf(" thu chia %d/%d ket qua ko chia het\n",n,a);
	}
	return true;
}
int main(){
	printf("liet ke cac so nguyen la nt 1..100:\n");
	for(int i=1;i<=100;i++){
		if(is_snt(i))
		  printf("tim thay snt: %d\n",i);
	}
}
