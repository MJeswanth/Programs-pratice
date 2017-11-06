/*
 *
 * PROBLEM:
 *          Given a row of houses, find the house number with the
 *          highest number of ODD neighbours. Is this always possible? 
 *          If yes:
 *               1. Give reasons why there is always such a house.
 *          If not:
 *               1. Give an example where it fails.
 *               2. Return something reasonable if no such house exists.
 *
 *          The reasons/example should be part of the file, as shown 
 *          below. They are commented out.
 *          The input is an array of integers with number of people in 
 *          each house and the length of the array.
 *
 * Do not delete any code/comments already present.
 *
 * If you do so, the (automated) test might fail.
 *
 * IF ANY CODE IS WRITTEN OUTSIDE THE Start/End Block
 * THE AUTOMATED TEST MAY FAIL.
 */
/*-------- BEGIN REASONS/EXAMPLES
if two howuses are having same odd neighbours we are going to take least value of the index.
	example:- two houses got value 5, 5 odd neighbours then we take index value of least 
one(arr[1],arr[7] having same then we take ith value)

  ---------END REASONS/EXAMPLES*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int solution( int *arr, int lenarr) {
	/* arr is array of integers, lenarr is length of the array */
	int return_value = -1;
	
	/*---Start your code after this line ---*/
	int odd=0,arroh[lenarr],i;
	
	arroh[0]=arr[1];
	
	arroh[lenarr-1]=arr[lenarr-2];
	
		for(i=1;i<lenarr-1;i++){
			
			
			arroh[i]=arr[i-1]+arr[i+1];
		}
	
		
		odd=i;
		for(i=0;i<lenarr-1;i++){
			
			if((arroh[i]%2)!=0&&(arroh[i]>arroh[odd]))
						odd=i;			
			
		}
	printf("\n");
	printf("%d",arroh[odd]);
	printf("\n");
	return_value=odd;
	
	
	/*---End your code before this line---*/
	return return_value;
}

/* Nothing needs to be changed below this line */
int main(int argc, char **argv) {
	FILE *fp = NULL;
	char *line = NULL;
	int actual_answer = -1;
	int lenarr = 0;
	int *arr = NULL;
	char *ip_filename = "one.data";

	line = malloc(sizeof(int) * 102);

	fp = fopen(ip_filename, "r");

	line = fgets(line, 102, fp);
	actual_answer = atoi(line);

	line = fgets(line, 102, fp);
	lenarr = atoi(line);

	arr = (int *)malloc(sizeof(int) * lenarr);
	int idx;
	for( idx = 0; idx < lenarr; idx++) {
		line = fgets(line, 102, fp); 
		arr[idx] = atoi(line);
	}

	free(line);
	fclose(fp);

	if (actual_answer == solution(arr, lenarr)) {
		printf("success\n");
	} else {
		printf("failure\n");
	}
	return 0;
}


