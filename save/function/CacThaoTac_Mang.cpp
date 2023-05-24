
#include<stdio.h>
#include<math.h>
//Nhap
void nhap(int a[] , int n){
    for( int i=0;i<n;i++){
     printf("nhap a[%d]= ",i);
     scanf("%d",&a[i]);  
    }
}
//Xuat
void xuat(int a[], int n){
    for( int i=0;i<n;i++){
    	 printf("a[%d]=%d\t",i,a[i]); 
		 if(i%10==0 && i!=0){
    		printf("\n"); 	
    	}		 
    	
    }   
}
//Gia tri lon nhat
int max(int a[], int n){
	int k=a[0];
	for( int i=0;i<n;i++){
		if(k<a[i]){
			k=a[i];
		}
	}
	return k;
}
//Gia tri nho nhat
int min(int a[], int n){
	int h=a[0];
	for( int i=0;i<n;i++){
		//h=a[0];
		if(h>a[i]){
			h=a[i];
		}
	}
	return h;
}
//Vi tri gia tri duong nho nhat
void vtmin(int a[],int n){
	int h=a[0],vt=0;
	for( int i=0;i<n;i++){
		//h=a[0];
		if(h>a[i] && a[i]>0){
			h=a[i];
			vt=i;
		}
	}
	printf("\nVi tri phan tu duong nho nhat la a[%d]=%d", vt, h);
}
//Tong mang
void tong(int a[],int n){
	int S=0;
	for( int i=0;i<n;i++){
		S=S+a[i];
	}
	printf("\nTong mang = %d",S);
}
//Trung binh cong, trung binh nhan
void tb(int a[], int n){
	float tbc=0,tbn=0,S=0,P=1;
	for( int i=0;i<n;i++){
		S=S+a[i];
		P=P*a[i];
	}
	tbc=(float)S/n;
	tbn=(float)P/n;
	printf("\nTrung binh cong = %f",tbc);
	printf("\nTrung binh nhan = %f",tbn);
}
//kiem tra tong cac cap so truoc co bang so sau
void tong2cap(int a[], int n){
	int dem=0;
	for(int i=0;i<n-1;i++){
		if(a[i-2]+a[i-1]==a[i]){
			dem++;
		}
	}
	printf("\nSo luong cap so ma so sau bang tong 2 so truoc la %d",dem);
}
//kiem tra day co tang dan hay ko
void ktdaytang(int a[], int n){
	int dem=0;
	for( int i=0;i<n-1;i++){
		if(a[i+1]>a[i]){
			dem++;
		}
	}
	if(dem==n-1){
		printf("\nDay co su tang dan");
	}
	else{
		printf("\nDay khong co su tang dan");
	}
}
//Tim kiem vi tri phan tu x (nhap x)
void timkiem(int a[], int n){
	int x,dem=0;
	printf("\nNhap x=");
	scanf("%d",&x);
	for( int i=0;i<n;i++){
		if(x==a[i]){
			printf("==> X thuoc vi tri a[%d]",i);
			dem++;
			break;
		}
	}
	if(dem==0){
			printf("Khong co vi tri X");
			
		}
}	

	

//Sap xep
void sapxep(int a[], int n){
	int h;
	printf("\nDay tang dan la:");
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                h = a[i];
                a[i] = a[j];
                a[j] = h;        
            }
        }
	}	    
    for(int i = 0; i < n; i++){
        printf("\t%d", a[i]);
    }
    printf("\nDay giam dan la:");
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                h = a[i];
                a[i] = a[j];
                a[j] = h;        
            }
        }
	}	    
    for(int i = 0; i < n; i++){
        printf("\t%d", a[i]);
    }
}
//Dao nguoc
void daonguoc(int a[], int n){	   
	printf("\nDay dao nguoc la"); 
    for(int i=n-1; i>=0;i--){
        printf("\t%d", a[i]);
    }
}
//Dem so duong va tinh tong 
void demtongduong(int a[], int n){
	int dem=0, Tong=0;
	for( int i=0;i<n;i++){
		if(a[i]>0){
			dem++;
			Tong=Tong+a[i];
		}
	}
	printf("\nMang co %d so duong va tong so duong = %d",dem,Tong);
}





int main(){
    int n, a[50];
    printf ("Nhap n: ");

	do {
		scanf ("%d",&n);
		if (n <= 0){
		printf ("Nhap lai n: ");
		scanf ("%d",&n);
		}
	}while (n < 0);
    nhap(a,n);
    xuat(a,n);
    printf("\nGia tri lon nhat la %d",max(a,n));
    printf("\nGia tri nho nhat la %d",min(a,n));
    vtmin(a,n);
    tong(a,n);
    tong2cap(a,n);
    tb(a,n);
    timkiem(a,n);
    ktdaytang(a,n); 
	daonguoc(a,n);
	sapxep(a,n);
	demtongduong(a,n);   
}
