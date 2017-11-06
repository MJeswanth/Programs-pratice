#include<stdio.h>
#include<math.h>
int standardDeviation(int * );

int main(){
	
	int arr[10],i;
	
	printf("Enter the numbers into 10 elements array:");
	
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	
	standardDeviation(arr);
	
}

int standardDeviation(int * arr){
	
	int i,sum=0,mean=0,varience=0,sdev;
	for(i=0;i<10;i++)
			sum=sum+arr[i];
	
	mean=sum/10;
	
	for(i=0;i<10;i++)
			varience=varience+pow(arr[i]-mean,2);
			
			sdev=sqrt(varience/10);
			
			printf("%d",sdev);
					
	
}
