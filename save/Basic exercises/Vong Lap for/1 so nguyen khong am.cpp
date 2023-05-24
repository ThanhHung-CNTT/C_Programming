//Nhap vao 1 so lon hon hoac bang 0
#include<stdio.h>
int main(){
	int n=-1;
	for(;;){
		printf("Nhap n=");
		scanf("%d",&n);
		if(n>=0)
		    break;
	}
	printf("n = %d", n);
	
}
