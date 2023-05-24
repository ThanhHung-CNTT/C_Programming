#include<stdio.h>
#include<math.h>
int main(){
	int n, tong=0,chia;	
	printf("Nhap n= ");
	scanf("%d",&n);
	while(n>0){
		chia=n%10;
		tong= tong + chia;
		n=n/10;
	}
	printf("Vay tong cac chu so la %d",tong);
}
