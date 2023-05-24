#include<stdio.h>
#include<math.h>
int so[100],m;
void nhapDaThuc1(int so[],int &m){
	printf("Nhap bac cua da thuc 1 = ");
	scanf("%d",&m);
	for(char heso=65;heso<=65+m;heso++){
		printf("Nhap %c = ",heso);
		scanf("%d",&so[heso-65]);
	}
}

void xuatDaThuc1(int so[],int m){
	int i=0,x=m;
	printf("Vay da thuc 1 la: y1= ");
	while(x>=0){
		printf("%dx^%d ",so[i],x);
		printf("+");
		i++;
		x--;
	}
	printf("0")
}

int giaTriDaThuc1(int so[],int m){
	int S1=0,i=0,x=m,t;
	printf("\nNhap gia tri x= ");
	scanf("%d",&t);
	while(x>=0){
		S1=S1+so[i]*pow(t,x);
		i++;
		x--;
	}
	return S1;
}

void nhapDaThuc2(int so[],int &m){
	printf("Nhap bac cua da thuc 2 = ");
	scanf("%d",&m);
	for(char heso=65;heso<=65+m;heso++){
		printf("Nhap %c = ",heso);
		scanf("%d",&so[heso-65]);
	}

}

void xuatDaThuc2(int so[],int m){
	int i=0,x=m;
	printf("Vay da thuc 2 la: y2= ");
	while(x>=0){
		printf("%dx^%d ",so[i],x);
		printf("+");
		i++;
		x--;
	}
	printf("0");
}

int giaTriDaThuc2(int so[],int m){
	int S2=0,i=0,x=m,t;
	printf("\nNhap gia tri x= ");
	scanf("%d",&t);
	while(x>=0){
		S2=S2+so[i]*pow(t,x);
		i++;
		x--;
	}
	return S2;
}
void tonggt2DaThuc(){
	printf("Vay tong 2 da thuc la: %d",giaTriDaThuc2(so,m)+giaTriDaThuc1(so,m));
}

int main(){
	nhapDaThuc1(so,m);
	xuatDaThuc1(so,m);
	giaTriDaThuc1(so,m);
	nhapDaThuc2(so,m);
	xuatDaThuc2(so,m);
	giaTriDaThuc2(so,m);
	tonggt2DaThuc();
}
