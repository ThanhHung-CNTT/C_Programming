#include<stdio.h>
int main(){
	int *pc,c;
	c=5;
	pc=&c;
	printf("Gia tri cua c la: %d",*pc);
	printf("\nDia chi cua c trong bo nho la: %p",pc);
	
	*pc=1;
	printf("\nGia tri cua c la: %d",c);
	printf("\nGia tri cua *pc la: %d",*pc);
}
