#include<stdio.h>
#include<string.h>
int main(){
	
	int i,j=0,len;
	char str[200];
	
	printf("Enter the string:");
	scanf("%s",str);
	
	
	len=strlen(str);
	
	
	for(i=0;i<len;i++){
		
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			
			str[j++]=str[i];
			
		}
	}
	str[j]='\0';
	printf("%s",str);
	
}
