#include<stdio.h>
int main(){
	int n,i,a[50],Tong=0;
	float TBC;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i<n){
		printf("a[%d] = ",i);
		scanf("%d",&a[i] );
		Tong=Tong+a[i];
		i++;	
	}
	TBC=float(Tong)/n;
	printf("\nVay tong = %.5f",TBC);
}
