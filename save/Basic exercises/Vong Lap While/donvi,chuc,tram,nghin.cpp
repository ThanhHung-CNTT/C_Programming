#include<stdio.h>
int main(){
	int n,chia;
	printf("Nhap so co 4 chu so: ");
	scanf("%d",&n);
	printf("Cac so hang don vi, chuc, tram, nghin lan luot la");
	while(n>0){
		chia=n%10;
		n=n/10;
		printf("\t%d",chia);
	}
}
