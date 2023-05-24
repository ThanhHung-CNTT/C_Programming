#include <stdio.h>

int main(){
    int A, B, UCLN,	BCNN, min, max, i;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &A);
    printf("\n Nhap vao so thu hai: ");
    scanf("%d", &B);
    if (A<=0||B<=0){
    	printf("\n Ban vui long nhap lai");
	    }
	if(A<B) min= A;
	else min= B;
	for(i=min; i>=1; i=i-1)
	if(A%i==0 && B%i==0){
		UCLN=i;
		
    break;
	    }
	printf("\n Vay uoc chung lon nhat cua %d va %d la: %d",A, B, UCLN);
	if(A>B) max= A;
	else max= B;
	for(i=max; i<=A*B; i=i+1)
	if(i%A==0 && i%B==0){
		BCNN=i;
	break;
	    }  
	printf("\n Vay boi chung nho nhat cua %d va %d la: %d",A, B, BCNN);

	}
