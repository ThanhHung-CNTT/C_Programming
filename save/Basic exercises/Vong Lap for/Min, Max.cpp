#include<stdio.h>
int main(){
	int n, a[100],max,min;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Nhao a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("day so nhap vao: \n");
	for(int i=1;i<=n;i++){
		printf("a[%d]= %d\n",i,a[i]);
	}
	max=a[1];
	for(int i=2;i<=n;i++){
		if(max>a[i]){
		  max=a[1];
	}
	else 
		max=a[i];
  } 
  	min=a[1];
	for(int i=2;i<=n;i++){
		if(min<a[i]){
		  min=a[1];
	}
	else 
		min=a[i];
  } 
  printf("max: %d\n",max);
  printf("min: %d",min);
}
