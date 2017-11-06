#include<stdio.h>
#include<string.h>

int main(){
	
	int count=0,i=0;
	char str[100],ch;
	
	printf("Enter the string:");
	scanf("%s",&str);
	
	printf("Enter particular character:");
	scanf(" %c",&ch);
	
	while(str[i]!='\0'){
		
		if(str[i]==ch)
				count++;
		
		
		
		i++;	
	}
	
	printf("%d",count);
	
	
	
}
