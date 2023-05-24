#include<stdio.h>
int min(int x[], int n){
	int min=x[0];
	for(int i=0;i<n;i++){
		if(min>x[i])
			min=x[i];
	}
	return min;
}
int max(int x[], int n){
	int max=x[0];
	for(int i=0;i<n;i++){
		if(max<x[i])
			max=x[i];
	}
	return max;
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
	
	printf("\nGia tri nho nhat la: %d",min(a,n));
	printf("\nGia tri nho nhat la: %d",max(a,n));
}
