#include<stdio.h>
int main(){
	float a;
	float BHYT, BHTN, DP, L;
	printf("Nhap Tien luong ban dau nhan vien:");
	scanf("%f",&a);
	BHYT=a*0.015;
	BHTN=a*0.01;
	DP=a*0.01;
	L= a-BHYT-BHTN-DP;
	printf("Luong thuc te: %.2f", L);
}
