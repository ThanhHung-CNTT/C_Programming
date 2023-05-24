#include<stdio.h>
int main(){
	int n,i,S=0;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i<=n){
		S=S+(i*(i+1)*(i+2));
		i++;	
	}
	printf("\nVay tong = %d",S);
}
