#include<stdio.h>
int main(){
	int n,i=1;
	float S=0;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i<=n){
		S=S+float(1)/(i*(i+1));
		i++;	
	}
	printf("\nVay tong = %.5f",S);
}
