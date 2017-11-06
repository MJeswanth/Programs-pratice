#include<stdio.h>
#include<string.h>

#define char_length 256

char *smallestWindow(char *str1,char *str2){
	
	int len1,len2,start=0,count=0,i=0,start_index=-1;
	int min_len=9999,len_window=0;
	int hash_str1[char_length]={0};
	int hash_str2[char_length]={0};
	
	len1=strlen(str1);
	len2=strlen(str2);
	
	for(i=0;i<len2;i++)
			hash_str2[str2[i]]++;
			
	for(i=0;i<len1;i++){
		
		
			hash_str1[str1[i]]++;
			
			
		if(hash_str2[str1[i]]!=0 && hash_str2[str1[i]]>=hash_str1[str1[i]])
							count++;
							
		
		if(count==len2){
			
			while(hash_str1[str1[start]]>hash_str2[str1[start]]||hash_str2[str1[start]]==0){
				
				
				if(hash_str1[str1[start]]>hash_str2[str1[start]])
							hash_str1[str1[start]]--;
						
						start++;
				
				
			}
			printf("min_len=%d \t len_window=%d\n ",min_len,len_window);
			len_window=i-start+1;
			
			if(min_len>len_window){
				
				min_len=len_window;
				start_index=start;
		
				
			}
			
			
			
		}
		
		
	}
	
	if(start_index==-1)
		printf("No shuch window exist");
	else{
		
		for(i=start_index;i<=(start_index+min_len-1);i++)
				printf("%c",str1[i]);
				
				
		printf("\nMin length is =%d\n",min_len);
		printf("StartIndex=%d\t endindex=%d\n",start_index,(start_index+min_len-1));
		
		
	}
	
}

int main(){
	
	char str1[250],str2[250];
	
	
	printf("Enter the 1st String:");
	scanf("%s",str1);
	
	printf("Enter the 1st String:");
	scanf("%s",str2);
	
//	printf("%s\n%s\n",str1,str2);
	
smallestWindow(str1,str2);
	
	
}
