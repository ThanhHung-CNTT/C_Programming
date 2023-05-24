#include<stdio.h>
#include<math.h>
 int main(){
 	int a,b,c,d,BCNN;
 	printf("nhap a: ");
 	scanf("%d", &a);
 	printf("Nhap b: ");
 	scanf("%d", &b);
 	//scanf("%d%d",&a,&b);
 	c=a;d=b;
 	for(int i=1;;i++)
 	    if(a==b){
 	    	BCNN=(c*d)/a;
 	    	printf("vay UCLN cua a va b la: %d",a);
 	    	break;
		 }
		 else{
		 	if(a>b){
		 		a=a-b;
			 }
			 else if(b>a);
			   b=b-a;
		  }
 	
 }
