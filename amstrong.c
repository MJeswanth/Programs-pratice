#include<stdio.h>
#include<math.h>

int main(){
	
	int n,i,sum=0,n1,num;
	int count=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	n1=n;
	while(n){
		n=n/10;
		count++;
	}
	n=n1;
	for(i=1;i<=count;i++){
		
		num=n%10;
		sum=sum+pow(num,count);
		n=n/10;
	}
	
	if(sum==n1)
	printf("Amstrong");
	else
	printf("Not Amstrong");
	
	
}
