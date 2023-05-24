#include<stdio.h>
int giaithua(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*giaithua(n-1);
}
int main(){
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<0);
	printf("%d! = %d",n,giaithua(n));
}
