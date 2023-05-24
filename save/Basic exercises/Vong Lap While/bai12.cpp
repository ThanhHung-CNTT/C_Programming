//bai nay em se hieu so 3 do la mu 3 :)
#include<stdio.h>
int main(){
	int n,i,S=0;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i<=n){
		S=S+i*i*i;
		i++;
	}
	printf("Vay Tong = %d",S);

}
