#include<stdio.h>
int gcd1(int ,int);
int main(){
	
	int n1,n2,gcd;
	
	printf("Enter the values of n1,n2:\t");
	scanf("%d%d",&n1,&n2);
	
	if(n1>n2)
		gcd=gcd1(n1,n2);
		else
		gcd=gcd1(n2,n1);
		
		printf("gcd=%d\t",gcd);
	
	
}

int gcd1(int n1,int n2){
	
	if(n2==0)
	return n1;
	else
	return gcd1(n2,n1%n2);
	
	
}
