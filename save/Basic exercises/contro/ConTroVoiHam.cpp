#include<stdio.h>
void swap(int *a,int *b){
	int k=*a;
	*a=*b;
	*b=k;
}

int main(){
	int a=5,b=10;
	swap(&a,&b);
	printf("a va b sau khi hoan doi: a=%d, b=%d",a,b);
}
