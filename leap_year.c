#include<stdio.h>
int main(){
	
	int year;
	
	printf("Enter the year to check leap year or not:");
	scanf("%d",&year);
	
	if(year%4){
		if(year%100){
			
			if(year%400)
					printf("%d is a leap year");
					else
						printf("%d is not a leap year");
			
		}
		else{
				printf("%d is a leap year");
		}
		
	}
	else
	printf("%d is not a leap year");
	
	
}
