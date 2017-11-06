#include<stdio.h>

int main(){
	
	int n,i;
	printf("Enter number to print the table:");
	scanf("%d",&n);
	
	for(i=1;i<11;i++){
		
		printf("%d * %d =%d \n",i,n,(i*n));
		
		
	}
	
}
