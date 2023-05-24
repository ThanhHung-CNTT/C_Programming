#include<stdio.h>
#include<string.h>
void my_strcat(char x1[], char x2[]){
	size_t len1 = strlen(x1);
	size_t len2 = strlen(x2);
	for(int i=len1; i<len1+len2; i++){
		x1[i]= x2[i-len1];
	}
	x1[len1+len2]='\0';
}
int main(){
	char s1[50]="Hello ";
	char s2[50]="Thanh Hung";
	//strcat(s1,s2); 
	//my_strcat(s1,s2);
	printf("%s",s1);
}
