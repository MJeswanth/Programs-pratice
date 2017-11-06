#include<stdio.h>
int main(){
	int n,i,fact=1;
	printf("Enter value of n to find factorial of it:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		fact=fact*i;
	printf("%d",fact);
}
