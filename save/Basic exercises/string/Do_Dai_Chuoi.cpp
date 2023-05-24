#include<stdio.h>
#include<string.h>
//Ham tinh do dai chuoi
int my_strlen(char ten[]){
	int i=0, Do_Dai=0;
	while(ten[i]!=NULL){
		Do_Dai++;
		i++;
	}
	return Do_Dai;
}
//Xoa ki tu xuong dong (\n)
void xoaxuongdong(char x[]){
	size_t len=strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
int main(){
	char ten[50];
	//Nhap chuoi bang ham fgets
	printf("Nhap ten cua ban:");
	fgets(ten,sizeof(ten),stdin);
	xoaxuongdong(ten);
	//Su dung ham strlen
	printf("Ten cua ban la: %s",ten);
	printf("\nDo dai ten la: %d",strlen(ten));
	//Cach khac
	printf("\nTen cua ban la: %s",ten);
	printf("\nDo dai ten la: %d",my_strlen(ten));
	
}
