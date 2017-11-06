#include<stdio.h>

int main(){
	
	int mul[4][4]={0},p1[4][4],p2[4][4];
	
	int i,j,k;
	
	printf("Enter the elements into the matrices:");
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		scanf("%d",&p1[i][j]);
		
			for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		scanf("%d",&p2[i][j]);
	
	
	for(i=0;i<4;i++){
		
			for(j=0;j<4;j++){
					for(k=0;k<4;k++)
									
				mul[i][j]+=p1[i][k]*p2[k][i];
				
			}
	}
	
for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			printf("%d",mul[i][j]);
			
		}
		printf("\n");
	}

}
