#include<stdio.h>

int a[100],n;

void nhap(int a[],int &n){
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<1);
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[],int n){
	printf("\nMang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}

void themVaoCuoiMang(int a[],int &n,int m){
	int size= sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("Khong the them vao mang");
	}
	a[n]=m;
	n++;
}

void thamVaoDauMang(int a[],int &n, int m){
	int size= sizeof(a)/sizeof(a[0]);
	if(n==size){
		printf("Khong the them vao mang");
	}
	n++;
	for(int i=n-1;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=m;
}
void ThemVaovtK(int a[],int &n,int m){
	int k,size=sizeof(a)/sizeof(a[0]);
	printf("\nNhap vi tri muon them:");
	scanf("%d",&k);
	if(n==size){
		printf("Khong the them duoc nua !!!");
	}
	n++;
	for(int i=n-1;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=m;
}
int main(){
	nhap(a,n);
	xuat(a,n);
	themVaoCuoiMang(a,n,69);
	xuat(a,n);
	thamVaoDauMang(a,n,96);
	xuat(a,n);
	ThemVaovtK(a,n,6969);
	xuat(a,n);
}
