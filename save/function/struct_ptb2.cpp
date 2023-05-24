// giai phuong trinh ax^2+bx+c=0
#include<stdio.h>
#include<math.h>
void nhap(float &a, float &b, float &c);
void dieuKien(float a, float b, float c);
float tinhDelta(float a, float b, float c, float delta);
float timNghiemCuaPT(float a, float b, float c, float delta, float x1, float x2);
int main(){
	float a, b, c;
	float delta;
	float x1, x2;
	nhap(a, b, c);
	dieuKien(a, b, c);
	timNghiemCuaPT(a, b, c, delta ,x1, x2);
	return 0;
}
void nhap(float &a, float &b, float &c){
	printf("nhap a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
}

void dieuKien(float a, float b, float c){
	if(a==0){
		if(b==0){
			if(c==0){
				printf("pt co vo so nghiem");
			}
			else printf("pt vo nghiem");
		}
		else printf("pt co nghiem duy nhat la x = %.2f", (-c)/b);
	}
	else printf("Tinh delta");
}

float tinhDelta(float a, float b, float c, float delta){
	return delta = b*b-4*a*c;
}

float timNghiemCuaPT(float a, float b, float c, float delta, float x1, float x2){
	if(delta<0){
		printf("da ket luan nhu tren");
	}
	else if(delta==0){
		x1 = ((-b)/2*a);
		printf("x1 = %.2f", x1);
	}
	else{
		x1 = ((-b)+sqrt(delta))/2*a;
		x2 = ((-b)-sqrt(delta))/2*a;	
	} 
	printf("x1 = %.2f, x2 = %.2f", x1, x2);
	return 0;
}

