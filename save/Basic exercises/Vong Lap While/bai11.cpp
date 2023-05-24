#include<stdio.h>
int main(){
	int n,i,S=1;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(n-i>=2){
		S=S*(n-i);
		i++;	
	}
	printf("\nVay tong = %d",S);
}
