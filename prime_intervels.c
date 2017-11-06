#include<stdio.h>
#include<math.h>
int prime(int , int);
int main(){
	
	int start,stop;
	
	printf("Enter the intervel for prime numbers:");
	scanf("%d%d",&start,&stop);
	
	prime(start,stop);

	
	
}

int prime(int start, int stop){

	int i,j,flag;
	
	for(i=start;i<=stop;i++){	
	
		flag=0;
		for(j=2;j<sqrt(i);++j){
		
			if(i%j==0){
				
				flag=1;
			
			}	
		}
		if(flag==0){
			
			printf("%d is a prime number\n",i);
			
		}
			
	}
	
	
}
