#include<stdio.h>
int a[100],n;

void nhap(int x[100], int &n){
	printf("Nhap n = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&x[i]);
	}
}

void xuat(int x[100], int n){
	printf("Mang vua nhap la:");
	for(int i=0;i<n;i++){
		printf(" %d",x[i]);
	}
}

void timkiem(int x[100],int n){
	int tk,kt=0;
	printf("\nNhap so muon tim:");
	scanf("%d",&tk);
	for(int i=0;i<n;i++){
		if(x[i]==tk){
			kt++;
		}
	}
	if(kt==0)
		printf("Khong im thay !!");
	else
		printf("Tim thay !!");
}

int main(){
	nhap(a,n);
	xuat(a,n);
	timkiem(a,n);
}
