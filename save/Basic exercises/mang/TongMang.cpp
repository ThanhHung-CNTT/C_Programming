#include<stdio.h>

int main(){
	//Khai bao
	int a[100],n,S=0;
	
	//Nhap mang
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<1 || n>100);
	
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	//Xuat mang
	printf("Mang vua nhap la:  ");
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	
	//Tinh tong mang
	for(int i=0;i<n;i++){
		S=S+a[i];
	}
	printf("\nTong = %d",S);
}
