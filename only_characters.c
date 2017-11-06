#include<stdio.h>

int main()
{
    char line[150],line1[150];
    int i, j=0;
    printf("Enter a string: ");
    gets(line);

   for(i=0;line[i]!='\0';i++){
   	
   	if((line[i]>='A'&&line[i]<='Z')||(line[i]>='a'&&line[i]<='z')){
   		
   		line1[j]=line[i];
   		j++;
	   }
   	
   	
   }
    printf("Output String: ");
    puts(line1);
    return 0;
}
