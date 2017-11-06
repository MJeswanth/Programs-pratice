#include<stdio.h>
#include<math.h>
int main(){
	
	int start,stop,i,x;
	
	printf("Entet the intervel to print prime numbers: ");
	scanf("%d%d",&start,&stop);
	printf("The prime  numbers are: ");
	for(i=start;i<=stop;i++){
		
		if(i==2||i==3||i==5||i==7){
			printf("%d\t",i);
			continue;
		}
			
		else if((i%2==0||i%3==0||i%5==0||i%7==0))
					continue;
		
		else
		printf("%d\t",i);
		
	}
	
	
}
