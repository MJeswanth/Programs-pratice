#include<stdio.h>
int convert_decimal_binary(int n);

int main(){
	
	int n;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	printf("Decimal of %d in binary is %lld.",n,convert_decimal_binary(n));
	
}

int convert_decimal_binary(int n){
	
	int quotient=n,reminder,binary=0,i=1;
	
	
	while(quotient){
		
		reminder=quotient%2;
		binary=binary+reminder*i;
		quotient=quotient/2;
		i=i*10;
		
		
	}
	return binary;
	
}
