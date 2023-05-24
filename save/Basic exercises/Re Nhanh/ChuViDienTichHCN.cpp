#include<stdio.h>
int main (){
    float a,b,p,s;
	printf ("nhap chieu dai chieu rong a,b: ");
    scanf ("%f%f" ,&a ,&b );
	if(a>0 && b>0 && a>b){
		p=(a+b)*2;
		s=a*b;
		printf("Chu vi = %.2f", p);
		printf("\nDien tich = %.2f", s);
	}
	else
		printf("Math Erro");
}
