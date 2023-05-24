#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(){
	int a,b;
	char c[2],k=1;
	printf("Nhap so dau:");
	scanf("%d",&a);
	printf("Nhap so cuoi:");
	scanf("%d",&b);
	printf("Nhap phep tinh:");
	scanf("%s",c);
	
	do{
	switch(c[0]){
		case '+':
			printf("a + b = %d",a+b);
			break;
		case '-':
			printf("a - b = %d",a-b);
			break;
		case '*':
			printf("a * b = %d",a*b);
			break;
		case '/':
			printf("a / b = %d",a/b);
			break;
		case '%':
			printf("a % b = %d",a%b);
			break;
		case '<':
			printf("a << b = %d",a<<b);
			break;
		case '>':
			printf("a >> b = %d",a>>b);
			break;
		default:
			printf("Phep tinh ban nhap khong dung ==> vui long out ra nhap lai tu dau :))");
			break;
	}
	//cout<<"nhan esc de ket thuc";
	k=getch();
	}while(k!=27);
	
}
/*k=getch();
c=k
while(c!=27)*/

