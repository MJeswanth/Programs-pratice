#include<stdio.h>
int main(){
	
	char ch;
	
	printf("Enter the character");
	scanf("%c",&ch);
	
	if((ch>96&&ch<123)||(ch>64&&ch<91))
			printf("Entered %c is a alphabet",ch);
	
	else
	printf("Entered %d is a number or special character");
	
	
}
