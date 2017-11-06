#include<stdio.h>
#include<math.h>
int prime(int);
int amsrong(int);
int main(){
	
	int n,prime1,amstrong1;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	prime1=prime(n);
	
	if(prime1==1){
		
		printf("%d is a prime number.",n);
	}
	else{
		printf("Is not a prime number");
	}
	
	printf("\n\n");
	amstrong1=amstrong(n);
	if(amstrong1==1){
		
		printf("%d is a amstrong number.",n);
	}
	else{
		printf("Is not a amstrong number");
	}

}

int prime(int n){
	
	int i,flag=0;	
	for(i=2;i<sqrt(n);i++){
		
		if(n%i==0){
			
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 1;
	else 
		return 0;
}

int amstrong(int n){
	
	int i,j,count,n1,num,sum=1,amst=0;
	
	n1=n;	
	while(n){
		n=n/10;
		count++;
	}
	
	
	n=n1;
	
	
	for(j=0;j<count;j++){
			
			num=n%10;			
	
sum=1;
	for(i=1;i<=count;i++){
			sum=sum*num;
		}
		amst=amst+sum;

		n=n/10;
		
		
	}
	
	if(amst==n1)
		return 1;
		else
		return 0;
	
	
	
	
}
