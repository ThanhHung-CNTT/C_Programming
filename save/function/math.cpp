#include<stdio.h>
#include<math.h>
void nhap(int &a, int &b){
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
}
void xuat(int a,int b){
	printf("\na = %d",a);
	printf("\nb = %d",b);
}
void tinhtoan(int a,int b){
	printf("\nTong = %d",a+b);
	printf("\nHieu = %d",a-b);
	printf("\nThuong = %f",a/b);
	printf("\nLuy thua = %.0f",pow(a,b));
}
int main(){
	int a,b;
	nhap(a,b);
	xuat(a,b);
	tinhtoan(a,b);
}
