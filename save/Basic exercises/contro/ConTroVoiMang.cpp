#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	//Xuat mang binh thuong
	printf("Mang cua a la: ");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	//Xuat dia chi mang
	printf("\nDia chi mang cua a la: ");
	for(int i=0;i<5;i++){
		printf("%d ",&a[i]);
	}
	
	printf("\nDia chi cua a la: %p",&a);
	printf("\nDia chi cua a[0] la: %p",&a[0]);
	
	
}

