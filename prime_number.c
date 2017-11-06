#include<stdio.h>

int main(){
	int n;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	if(n==2||n==3||n==5||n==7)		
				printf("Given number is prime number:");
	else{
			
	if((n%2==0)||(n%3==0)||(n%5==0)||(n%7==0)){
		printf("Given number is not a prime number:");
	}			
	else
		printf("Given number is a prime number:");
	
	}

}
