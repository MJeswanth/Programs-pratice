#include<stdio.h>

int main(){

	long long  n;
	int rev=0;

		printf("Enter the value of n: ");
		scanf("%d",&n);

	while(n){
		
		rev=rev*10+(n%10);
		n=n/10;
		
	}
	
	printf("The  reverse of the number is :%d",rev);
}
