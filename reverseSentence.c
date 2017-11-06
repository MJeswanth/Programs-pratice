#include<stdio.h>

char reverseSentence(){
	
	char ch;
	
	scanf("%c",&ch);
	
	if(ch!='\n'){
		
		reverseSentence();
		printf("%c",ch);
		
		
	}
	
	
}
int main(){
	
	printf("Enter the sentence: ");
		reverseSentence();
}
