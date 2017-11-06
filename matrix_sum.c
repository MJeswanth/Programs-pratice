#include<stdio.h>

int main(){
	
	int arr[10][10]={0},arr1[10][10]={0},sarr[10][10]={0},sum=0,i,j;
	
	printf("Enter the elements intp 4X4 matrix:");
	
	for(i=0;i<=3;i++)
		for(j=0;j<=3;j++){
			scanf("%d", &arr[i][j]);
		}
		
			printf("Enter the elements intp 4X4 2nd matrix:");
	
	for(i=0;i<=3;i++)
		for(j=0;j<=3;j++){
			scanf("%d",&arr1[i][j]);
		}	
	
	arr[0][0]=1;
	
	for(i=0;i<=3;i++)
		for(j=0;j<=3;j++)
			sarr[i][j]=arr1[i][j]+arr[i][j];
			
				for(i=0;i<=3;i++){
		for(j=0;j<=3;j++)
		{
			printf("%d\t",sarr[i][j]);
			
		}
		printf("\n");
		
	}
	
	for(i=0;i<=3;i++)
		for(j=0;j<=3;j++)
		sum=sum+sarr[i][j];
			
			printf("%d",sum);	
}
