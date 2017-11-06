#include<stdio.h>
int main(){
	int n,fb1=1,fb2=1,i,temp=0;
	
	printf("Enter the value tpo find fibonacci");
	scanf("%d",&n);
	
	printf("0   1 \t");
	
	for(i=1;i<=n;i++){
		
		printf("%d \t",fb2);
		temp=fb1;
		fb1=fb2;
		fb2=fb1+temp;
		
		
	}
	
	
}
