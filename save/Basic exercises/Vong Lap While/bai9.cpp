#include<stdio.h>
int main(){
	int n,i,S=0;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i<=n){
		S=S+(2*i+1);
		i++;	
	}
	printf("\nVay tong = %d",S);
}
