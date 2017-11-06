#include<stdio.h>

int main(){
	
	
	char arr[250],temp[256]={0};
	char ch;
	int i;
	printf("Enter the string:");
	gets(arr);
	
	printf("Enter required character:");
	scanf("%c",&ch);
	
	
	for(i=0;arr[i]!='\0';i++)
			temp[arr[i]]++;
			
			
	
	printf("%c is of %d times",ch,temp[ch]);
}
