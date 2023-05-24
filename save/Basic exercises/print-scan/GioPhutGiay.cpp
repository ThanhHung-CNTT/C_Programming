//Doi giay=gio:phut:giay
#include<stdio.h>
int main(){
	//Khai bao, Nhap
	int n,gio,giodu,phut,giay;
	printf("So giay = ");
	scanf("%d",&n);
	//Tinh toan
	gio=n/3600;
	giodu=n%3600;
	phut=giodu/60;
	giay=giodu%60;
	//Xuat ket qua
	printf("Vay thoi gian cu the la: %d:%d:%d",gio,phut,giay);
}
