#include"stdio.h"
#include"string.h"
void Copy_Chuoi(char ten[],char copy[]){
	size_t len2 = strlen(ten);
	for(int i=0; i<len2;i++){
		copy[i]=ten[i];
	}
	copy[len2]='\0';
}
int main(){
	char ten[50]="Thanh Hung";
	char copy[50]="";
	
	printf("ten ban dau: %s",ten);
	printf("\nten sau copy:");
	//strcpy(copy,ten);
	Copy_Chuoi(ten, copy);
	printf(" %s",copy);
}
