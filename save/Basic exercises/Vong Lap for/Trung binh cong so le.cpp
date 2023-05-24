#include<stdio.h>
int main(){
	int a[100],n,dem=0;
	float tbc,s;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Day so vua nhap la:\n");
	for(int i=1;i<=n;i++){
		printf("a[%d]= %d\n",i,a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i]%2==1){
			s+=a[i];
			dem+=1;
	}
   }
   tbc=s/dem;
   printf("Vay trung binh cong so le la: %.3f",tbc);
}
