#include<stdio.h>
float trungBinhCong(int a[], int n){
	float S=0;
	for(int i=0;i<n;i++){
		S=S+a[i];
	}
	printf("\nTBC = %.2f",S/n);
}

float trungBinhCongDuong(int a[], int n){
	int S=0,dem=0;
	float TBC=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			S=S+a[i];
			dem++;
		}
	}
	TBC=(float)S/dem;
	if(dem>0){
	printf("\nTBC so duong = %.2f",TBC);
	}
	else printf("\nTBC so duong = Math Erro");
}
int main(){
	int a[100],n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<1 || n>100);
	
	for(int i=0;i<n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
	trungBinhCong(a,n);
	trungBinhCongDuong(a,n);
}
