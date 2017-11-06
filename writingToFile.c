#include<stdio.h>

int main(){
	int n;
	char name[100];
	
	FILE *fp;
	
	printf("Enter the file name:");
	scanf("%s",name);
	
	fp=fopen("C:\\Users\\admin\\Desktop\\textfile.txt","w");
	
	if(fp==NULL)
		{
			printf("Error!");
			exit(1);
		}
	
	
	printf("Enter number of students:");
	scanf("%d",&n);
	int i,roll;
	char str[150];
	for(i=0;i<n;i++){
		
		printf("Enter the name of student:");
		scanf("%s",str);
		
		printf("Ente the RollNo:");
		scanf("%d",&roll);
		
		fprintf(fp,"%s ,%d",str,roll);
	//	fprintf(fp,"\nName: %s \nRollNo=%d \n",str,roll);
		
	}
	
	
	
}
