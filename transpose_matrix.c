#include<stdio.h>

int main(){
	
	int tmatrix[4][4],matrix[4][4];
	int i,j;
	printf("Enter the matrix:");
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&matrix[i][j]);
			
			
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			tmatrix[j][i]=matrix[i][j];
			
			
	for(i=0;i<4;i++){
		
			for(j=0;j<4;j++){
			
				printf("%d\t",tmatrix[i][j]);				
				
			}	
			printf("\n");
	}

	
}
