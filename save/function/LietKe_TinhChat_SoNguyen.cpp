#include<stdio.h>
#include<math.h>
int dkchiahet2va3(int a){
	return (a%2==0 && a%3==0);
}
int dkSNT(int a){
	if(a<1)
		return 0;
	for(int i=0;i<sqrt(a);i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int n,a[100];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<1);
	
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Cac so chia het cho 2 va 3 la: ");
	for(int i=0;i<n;i++){
		if(dkchiahet2va3(a[i]))
			printf("\t%d",a[i]);
	}
	printf("\nCac SNT la: ");
	for(int i=0;i<n;i++){
		if(dkSNT(a[i]))	
			printf("\t%d",a[i]);
	}
}
