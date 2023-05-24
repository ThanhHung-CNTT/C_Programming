#include<stdio.h>
int main(){
	int n, i=1;
	float H=0;
	printf("Nhap n=");
	scanf("%d", &n);
	while(i<=n){
		H=H+float(1)/i;
		i++;
	}
	printf("Vay H=%.02f",H);
}
