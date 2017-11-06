#include<stdio.h>

int main(){
	
	int n,i,sum=1;
	
	printf("Enter the number for factorial:");
	scanf("%d",&n);
	
	printf("The factors of number are: ");
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
		printf("%d\t",i);
		
	}
	 printf("%d",sum);
	
}
