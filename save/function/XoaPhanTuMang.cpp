#include<stdio.h>

int a[100],n;

void nhap(int a[],int &n){
	printf("Nhap n = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}


void xuat(int a[],int n){
	printf("Mang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}


void xoaViTriMang(int a[], int &n, int vi_tri){
	for(int i=vi_tri;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
}


void xoaGiaTriMang(int a[],int &n){
	int gt;
	printf("\nNhap gia tri can xoa:");
	scanf("%d",&gt);
	for(int i=0;i<n;i++){
		if(a[i]==gt){
			xoaViTriMang(a,n,i);
		}
	}
}

int main(){
	nhap(a,n);
	xuat(a,n);
	xoaGiaTriMang(a,n); 
	xuat(a,n);
}
