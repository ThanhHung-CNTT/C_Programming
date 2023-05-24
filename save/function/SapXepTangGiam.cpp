#include<stdio.h>


void sapxepTang(int a[],int n){
	int k;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
		}
	}
	printf("Day tang dan la:");
	for(int i=0;i<n;i++){
		printf("  %d",a[i]);
	}
}

void sapxepGiam(int a[],int n){
	int k;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
		}
	}
	printf("\nDay giam dan la:");
	for(int i=0;i<n;i++){
		printf("  %d",a[i]);
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
	sapxepTang(a,n);
	sapxepGiam(a,n);
}
	
	
	
	
	
	
