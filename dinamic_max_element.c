#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n,num,i;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	int *arr = (int *)malloc(sizeof(int)*n+1);
	
	printf("Enter elements into array:");
	for(i=0;i<n;i++){
		
		printf("Enter the %dth element:",i);
		scanf("%d",&num);
		arr[i]=num;
		
	}
	
	int max;
	
	max=arr[0];
	
	for(i=1;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	
	printf("%d",max);
	
	
}
