// Chuyen mot so nguyen sang he nhi phan :))
#include<stdio.h>    

int main(){  
	int a[10],n,i;  
 	printf("Nhap mot so nguyen bat ky: ");  
	scanf("%d",&n);  
	
	for(i=0;n>0;i++){  
		a[i]=n%2;  
		n=n/2;  
 	}  
			printf("\nDang nhi phan la: ");  
	for(i=i-1;i>=0;i--){  
		printf("%d",a[i]);  
	} 

}  
