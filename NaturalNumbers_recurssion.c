#include<stdio.h>
int sum=0;
int naturalNumbers(int n){
	
	sum=sum+n;	
	if(n==0)
		return;
	else
	return naturalNumbers(n-1);
}

int main(){
	
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	naturalNumbers(n);
	printf("%d",sum);
}
