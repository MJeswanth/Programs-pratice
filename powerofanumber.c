#include<stdio.h>
int main(){
	
	int n,exp,pow=1;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of exp: ");
	scanf("%d",&exp);
	
	while(exp){
		
		pow=pow*n;
		exp--;
	}
	printf("The power of given number:%d",pow);
}
