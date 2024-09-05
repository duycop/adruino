//lam viec voi mang cac ki tu
//nhap chuoi ki tu, chuyen no thanh chu HOA toan bo
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];  //ko nhap so luong truoc
	printf("Nhap mot xau ky tu: ");
    fgets(s, sizeof(s), stdin);  // Ðoc vào toi da 99 ký tu (chua chu cho '\0')
    //cuoi s: chua ma 10 (xuong dong), roi ma '\0'
    
    printf("Xau da nhap  : %s", s);
    
    //chuyen thanh chuoi chu hoa
    //biet sau vi tri cuoi cung: co gia tri '\0'
    for(int i=0; s[i] != '\0'; i++ ){
    	if(s[i]>='a' && s[i]<='z')
			s[i] -= 32;
    	//A=65 B=66
    	//a=97 b=98    	
	}
	printf("Xau da HOA   : %s", s);
	
	for(int i=0; s[i] != '\0'; i++ ){
    	if(s[i]>='A' && s[i]<='Z')
			s[i] += 32;
    	//A=65 B=66
    	//a=97 b=98    	
	}
	printf("Xau da thuong: %s", s);
	
	//chi viet hoa cac chu cai dau moi tu
	//vd kq: Viet Nam Que Huong Toi
	if(s[0]>='a' && s[0]<='z')s[0] -= 32;  //xu ly chua cai dau tien
	
	//cac chu cai khac: SPACE duong truoc
	
	for(int i=0; s[i+1] != '\0'; i++ ){
    	if(s[i]==' ' && s[i+1]>='a' && s[i+1]<='z')
			s[i+1] -= 32;
	}
	printf("Xau da Thuong: %s", s);
	
	char s2[100];
	strcpy(s2, s);  // Sao chép chuoi s sang s2
	
	printf("Xau copy s2  : %s", s2);
	printf("len of s = %d, len of s2 = %d\n", strlen(s),strlen(s2));
	
	//s la dia chi dau of mang	
	if(s == s2){  //tai sao???
		printf("giong nhau ve dia chi\n");
	}else{
		printf("khac nhau ve dia chi\n"); //no bao khac nhau
	}
	
	if(0==strcmp(s,s2)){
		printf("giong nhau ve noi dung\n");
	}else{
		printf("khac nhau ve noi dung\n"); //no bao khac nhau
	}
	/**/
	
	char mk[]="Love ";
	mk[strlen(mk)-1]=10;  //chu dong gan 1 ki tu XUONG DONG vao cuoi mk
	
	//int x= strcmp(s,mk);  //de khi so sanh voi chuoi nhap tu ban phim ko bug
	//printf("check s=%s,  x=%d\n", s,x);
	
	if(0==strcmp(s,mk)){
		printf("mk ok: xin chao ban\n");
	}
}
