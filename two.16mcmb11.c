/*
 *
 * PROBLEM:
 *      Given two strings, find if they are anagrams of each other.
 *      Assume that strings consist of only alphabets a,b,c,A,B,C.
 *      Return 0 if the strings are anagrams and 1 if they are not
 *      anagrams. There is no difference between uppercase and lowercase
 *      letters EXCEPT FOR THE FIRST CHARACTER OF EACH OF THE STRINGS. 
 *      Those characters should have an exact match.
 *
 *
 * Do not delete any code/comments already present.
 *
 * If you do so, the (automated) test might fail.
 *
 * IF ANY CODE IS WRITTEN OUTSIDE THE Start/End Blocks,
 * THE AUTOMATED TEST MAY FAIL.
 */
#include <stdlib.h>
#include <stdio.h>
#include<ctype.h>
#include <string.h>

int solution(const char *str1, const char *str2) {
	/* str1 is first string and str2 is second string */


		int return_value = -1;	
	/*---Start Code after this line ---*/
	int len1,len2;
			int temp[256]={0},count=0,i;
			int s1=-1,s2=-1;
	len1=strlen(str1);
	len2=strlen(str2);
		if(len2!=len1)
			return return_value;

			for(i=0;i<len2;i++){				
				if(str1[0]==str2[i]){					
					s1=i;
					break;								
				}				
			}
			
				for(i=0;i<len2;i++){				
						if(str2[0]==str1[i]){					
					s2=i;
					break;								
				}				
			}


				if(s1<0||s2<0)
					return 1;

	
				++(temp[str1[0]]);
				++temp[str1[s2]];
				--temp[str2[0]];
				--temp[str2[s1]];		
		for(i=1;i<len1;i++)
		{
			if(s2!=i)
				temp[tolower(str1[i])]++;
			
		}	
		
			for(i=1;i<len2;i++)
				{
					if(s1!=i)
						temp[tolower(str2[i])]--;
					
				}

		for(i=0;i<256;i++){
			if(temp[i]==0){				
				count++;
			}
			else break;
		}


		if(count==256)
			return_value= 0;
		else
			return_value= 1;

	/*---End Code before this line---*/
	return return_value;
}

/* Nothing needs to be changed below this line */
int main(int argc, char **argv) {
	FILE *fp = NULL;
	char str1[102], str2[102], line[102];
	int actual_answer, answer;
	int lenarr = 0;
	int *arr = NULL;
	char *ip_filename = "two.data";

	fp = fopen(ip_filename, "r");

	fgets(line, 102, fp);
	actual_answer = atoi(line);
	fgets(str1, 102, fp);
	fgets(str2, 102, fp);
	answer = solution(str1, str2);
	if (actual_answer == answer) {
		printf("success\n");
	} else {
		printf("failure\n");
	}
	return 0;
}

