#include "stdio.h"
#include "string.h"
void my_strupr(char x[]){
	for(int i=0; i<strlen(x); i++){
		if(x[i]>=97 && x[i]<=122){
			x[i] = x[i]-32;
		}
	}
}

void my_strlwr(char x[]){
	for(int i=0; i<strlen(x); i++){
		if(x[i]>=65 && x[i]<=90){
			x[i] = x[i]+32;
		}
	}
}

int main(){
	char s[50] = "";
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	printf("s = %s", s);
	//strupr(s);
	my_strupr(s);
	printf("Chuyen sang viet hoa s=%s", s);
	//strlwr(s);
	my_strlwr(s);
	printf("Chuyen sang viet thuong s=%s", s);
}
