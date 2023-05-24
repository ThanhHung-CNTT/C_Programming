#include<stdio.h>
int main(){
        int so, i, dem=0;
        printf("Nhap so nguyen can kiem tra: ");
        scanf("%d",&so);
        if(so<=1)
        	printf("Khong phai so nguyen to.");
        else{
        	for (i=2;i<so;i++) 
				if (so%i==0) 
					dem=dem+1;
		    if (dem==0) 
				 printf("So %d la so nguyen to",so); 
			else 
				printf("So %d khong phai la so nguyen to",so);
		}	
}
