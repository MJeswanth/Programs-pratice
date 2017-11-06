#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define no_of_char 256

struct node{
	
	struct node *prev;
	char ch;
	struct node *next;
	
};
/*struct node
{
    char ch;
    struct node *next, *prev;
};*/
 

void append(struct node** head,struct node** tail,char ch){
		
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->ch=ch;
	temp->prev=temp->next=NULL;
	
	if(!(*head)){
		*head=*tail=temp;
		return;		
	}
	
(*tail)->next=temp;
temp->prev=(*tail);
*(tail)=temp;
	
}
void removeNode(struct node **head, struct node **tail, struct node *temp)
{
    if (!(*head))
        return; 
    if (*head == temp)
        *head = (*head)->next;
    if (*tail == temp)
        *tail = (*tail)->prev;
    if (temp->next)
        temp->next->prev = temp->prev;
    if (temp->prev)
        temp->prev->next = temp->next; 
    free(temp);
}


void nonRepeating_Streamofcharacters(){
	
	struct node *DLL[no_of_char];
	int repeated[no_of_char],index;
	char ch;
	
	struct node *head=NULL,*tail=NULL;
	
	for(index=0;index<no_of_char;index++){
		
		DLL[index]=NULL;
		repeated[index]=0;		
		
	}
	
	char stream[]="i am trying in this way";
	
	for(index=0;stream[index];index++){
		
		ch=stream[index];
		
		if(!repeated[index]){
			
			if(!DLL[ch]){
				
				append(&head,&tail,stream[index]);
				
				DLL[ch]=tail;				
			}
			  else 
            {
                removeNode(&head, &tail, DLL[ch]);
                DLL[ch] = NULL;
                repeated[ch] = 0; 
            }		
		}
		
	if(head)
            printf("First non-repeating character so far is = %c\n", head->ch);	
		
	}
	
	
}
int main(){
	
	nonRepeating_Streamofcharacters();
	return 0;
	
}
