#include<stdio.h>
#include<math.h>

int main(){
	
	int start,stop,count;
	int i,sum=0,n,n1,j,num;
	printf("Enter the number:");
	scanf("%d%d",&start,&stop);
	

	for(i=start;i<=stop;i++){
		count=0;
		n=i;
		n1=i;
		while(n){			
			n=n/10;		
			count++;
					
		}

		
		n=n1;

	sum=0;
		for(j=0;j<count;j++){

		
		num=n%10;
		sum=sum+pow(num,count);
		n=n/10;
					
		}
	//	printf("%d\n",sum);
		
		if(n1==sum)
			printf("Amstrong numbers are \t %d \n\n",i);
		
		
		
		
	}
	
	
}
