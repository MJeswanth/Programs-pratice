#include<stdio.h>
#include<math.h>
int convert_Binary_Decimal(int long long);

int main(){
	long long n;

	
	printf("Enter the binary value:");
	scanf("%lld",&n);

	convert_Binary_Decimal(n);
	printf("Binary of %lld in decimal is %d",n,convert_Binary_Decimal(n));
	
}
int convert_Binary_Decimal(long long n){
	
		int reminder,i=0,decimal=0;
	
	while(n!=0){
		
		reminder=n%10;

		decimal=decimal+(reminder*pow(2,i));

		n=n/10;
		++i;
		
	}

	return decimal;	
}
