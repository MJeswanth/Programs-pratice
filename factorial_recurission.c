#include<stdio.h>
int fact=1;
int factorial(int n){
	
	if(n==0)
	return;
	
	fact=fact*n;
	
	return factorial(n-1);
	
}

int main(){
	
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	factorial(n);
	printf("%d",fact);
}
