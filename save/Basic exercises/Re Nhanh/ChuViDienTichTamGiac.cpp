#include<stdio.h>
#include<math.h>
int main (){
	float a, b, c, P, S, h, p;
	printf("Nhap a,b,b:");
	scanf("%f%f%f" , &a, &b, &c);
	if(a+b>c){
		P=a+b+c;
		p=float(P)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi = %.5f\n", P);
		printf("Dien tich = %.5f", S);
		}
	else
		printf("Khong co tam giac nao thoa man do dai");
		
}
