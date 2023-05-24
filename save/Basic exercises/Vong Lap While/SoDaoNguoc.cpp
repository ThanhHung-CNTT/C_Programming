#include<stdio.h>
int main(){
	int n,dao=0,chia;
	printf("Nhap so nguyen n= ");
	scanf("%d",&n);
	while(n > 0){
        chia = n % 10;
        dao = dao * 10 + chia;
        n = n / 10;
    }
    printf("So dao nguoc la %d",dao);
}
