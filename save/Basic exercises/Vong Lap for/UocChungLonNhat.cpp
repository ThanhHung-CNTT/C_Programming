//Tim uoc chung lon nhat
#include<stdio.h>
int main(){
	int a,b,uoc=1;
	printf("Gia tri a va b lan luot la: ");
	scanf("%d%d",&a,&b);
	for(int i=2;i<=a&&i<=b;i++){
		if(i%a==0&&i%b==0){
			uoc=i;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la %d",a,b,uoc);
}
