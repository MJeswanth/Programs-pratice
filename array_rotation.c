#include<stdio.h>
#include<stdlib.h>
int rotateArray(int* A, int n1, int B) {
//	int *ret = (int *)malloc(n1 * sizeof(int));
int ret[n1];
	int i,b,j;
	B = B%n1;
	for (i = 0; i < n1; i++)
	{
	    if(i+B>=n1)
	    {
	        b = (i+B)-n1;
	        ret[i] = A[b];
	    }
	    else
	    {
	         ret[i] = A[i + B];
	         
	    }
	    
	}
	for(j=0;j<9;j++)
		printf("%d\t",ret[j]);


}

int main(){
	
	int arr[]={10,15,20,30,100,90,78,999,99};
	
	rotateArray(arr,9,5);
	
}
