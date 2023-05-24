#include<stdio.h>
//Day chi la sap xep nguoc lai thoi
void xuatMangDaoNguoc(int a[],int n){
	printf("\nMang dao nguoc la:");
	for(int i=n-1;i>=0;i--){
		printf("  %d",a[i]);
	}
}
//Day moi la thay doi gia tri nguoc lai ne =))
void daoNguocGiaTri(int a[],int n){
	int k;
	for(int i=0;i<n/2;i++){
		k=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=k;
	}
}
int main(){
	int n,a[100];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<1);
	
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	xuatMangDaoNguoc(a,n);
	daoNguocGiaTri(a,n);
	printf("\nXuat mang sau khi doi gia tri:");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}



