#include<stdio.h>
int main(){
	int day,month,year;
	printf("Nhap Ngay Thang Nam cua ban: ");
	scanf("%d%d%d",&day,&month,&year);
	while(day>31 || month>12){
		printf("Ngay khong hop le, nhap lai: ");
		scanf("%d%d%d",&day,&month,&year);
	}
	printf("Vay Ngay Thang Nam la: %d/%d/%d",day,month,year);
	
}
