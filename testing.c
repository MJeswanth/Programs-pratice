#include<stdio.h>
#include<string.h>

char function(char *str1,char *str2){
	
	printf("%u,%u\n",str1,str2);
	
	printf("%s\n%s\n",str1,str2);
	
	
	printf("%c,%c",str1,str2);
	
}


int main(){
	
	char str1[100],str2[100];
	
	printf("Enter the character:");
	gets(str1);
	
	printf("enter 2nd string:");
	gets(str2);
	printf("%u,%u\n",str1,str2);
	function(str1,str2);
	
}
