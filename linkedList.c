#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
    
};

struct Node *node;

struct Node * GetNode(int value)
{
    struct Node *p;
	p=(struct Node*)malloc(sizeof(struct Node));
	p->data=value;
	p->next=NULL;
	return p;
}
void insertList(struct Node *start,int n)
{
	
	struct Node *current;
	struct Node *new;
	current=start;
	while(current->next!=NULL)
	{		
		current=current->next;
	}
	new=GetNode(n);
	current->next=new;
	return ;
	
}
void printList(struct Node *start)
{
	if(start==NULL)
	{
		printf("List is empty");
	}
	struct Node *current;
	current=start;
	
	while(current!=NULL)
	{
		printf("%d->",current->data);
		current=current->next;
	}
	return;

}

int main()
{
	int n;
	printList(node);
	printf("\n");
	scanf("%d",&n);
	node=GetNode(n);	
    insertList(node,10);
    insertList(node,35);
	printList(node);
	printf("NULL");
}
    
           
    