//giai phuong trinh bac 2
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,d;
	printf("Nhap a,b,b:");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		if(b==0)
			if(c==0)
				printf(" PT VSN");
			else
				printf("PT VN");
		else
			x1=-float(c)/b;
			printf("x=",x1);
		}
	else
		d=b*b-4*a*c;
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("pt co 2 nghiem\n");
		printf("x1=%.2f\n",x1);
		printf("x2=%.2f",x2);
}
