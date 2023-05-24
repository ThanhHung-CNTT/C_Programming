#include<stdio.h>
int a[100],n;

void nhap(int x[],int &n){
	printf("Nhap n = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&x[i]);
	}
}

void xuat(int x[],int n){
	printf("\nMang vua nhap la:");
	for(int i=0;i<n;i++){
		printf(" %d",x[i]);
	}
}

void minmaxthu2(int x[],int n){
	int max=x[0],max2;
	for(int i=0;i<n-1;i++){
		if(x[i+1]>x[i])
			max=x[i+1];
	}
	for(int i=0;i<n;i++){
		if(x[i]==max)
			continue;
		for(int j=i+1;j<n-1;j++){
			if(x[j]>x[i])
				max2=x[j];
		}
	}
	printf("\nPhan tu lon thu 2 la: %d",max2);
	int min=x[0],min2=5;
	for(int i=0;i<n-1;i++){
		if(x[i+1]<x[i])
			min=x[i+1];
	}
	for(int i=0;i<n;i++){
		if(x[i]==min)
			continue;
		for(int j=i+1;j<n-1;j++){
			if(x[i]>x[j])
				min2=x[j];
		}
	}
	printf("\nPhan tu nho thu 2 la: %d",min2);
}

/*void minthu2(int x[],int n){
	int min=x[0],min2;
	for(int i=0;i<n-1;i++){
		if(x[i+1]<x[i])
			min=x[i+1];
	}
	for(int i=0;i<n;i++){
		if(x[i]==min)
			continue;
		for(int j=i+1;j<n-1;j++){
			if(x[j]<x[i])
				min2=x[j];
		}
	}
	printf("\nPhan tu nho thu 2 la: %d",min2);
}*/

int main(){
	nhap(a,n);
	xuat(a,n);
	minmaxthu2(a,n);
	//minthu2(a,n);
}
