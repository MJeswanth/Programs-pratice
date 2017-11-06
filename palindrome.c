#include<stdio.h>

int main(){
	
	int n,n1,rev=0;
	
	printf("Enter the value of an n upto 9 digits: ");
	scanf("%d",&n);
	
	n1=n;
	while(n){
		rev=rev*10+n%10;
		n=n/10;		
	}
		
	if(n1==rev)
	printf("Given number is a palindrome!!!");
	else
	printf("Given number is not a palindrome!!!");
	
	
}
