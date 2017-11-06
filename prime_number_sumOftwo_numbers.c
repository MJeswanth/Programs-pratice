#include<Stdio.h>
#include<math.h>
int main(){
	
	int n,n1,n2,i,j,flag=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	if(n<=1)
		return;
		
		for(i=1;i<n/2;i++){
			
		n1=n-i;
		n2=n-n1;
		flag=0;
		
		for(j=2;j<sqrt(n1);j++){
			
			if(n1%j==0){
				flag=1;
				break;
			}
					
		}
		
		if(flag==0){
			
		for(j=2;j<=sqrt(n1);j++){
			
			if(n2/j==0){
				flag=1;
				break;
			}
			
			if(flag==0){
				printf("%d\t%d\n",n1,n2);
				break;
			//	printf("We could find sum of 2 prime numbers from given number.");
			//	return;
			}	
			
		}
		
		}
		
		
		}
		
}
