#include<stdio.h>
int main(){
	char ten[50];
	// Nhap ten ko chua khoang cach
//	printf("Nhap ten cua ban:");
//	scanf("%s",ten);
//	printf("Ten cua ban la: %s",ten);
	// Nhap ten chua khoang cach
	printf("Nhap ten cua ban: ");
	gets(ten);
	printf("Ten cua ban la: ");
	puts(ten);
}
