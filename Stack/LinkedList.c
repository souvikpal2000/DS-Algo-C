#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *nextAddress;
}Node;

Node *top=NULL;

void push(int no)
{
	Node *newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = no;
	newNode->nextAddress = top;
	top = newNode;
}
void pop()
{
	Node *ptr;
	ptr = top;
	if(ptr==NULL)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		top = ptr->nextAddress;
		free(ptr);
	}
}
void peek()
{
	Node *ptr;
	ptr = top;
	if(ptr==NULL)
	{
		printf("Stack Empty");
	}
	else
	{
		printf("Topmost Element : %d",ptr->data);
	}
}
void display()
{
	Node *ptr;
	ptr = top;
	if(ptr == NULL)
	{
		printf("Stack Empty\n");
	}
	else
	{
		printf("TOP\n");
		while(ptr != NULL)
		{
			printf("%d\n",ptr->data);
			ptr = ptr->nextAddress;
		}
	}
}
int main()
{
	printf("Stack using Linked List\n");
	printf("***********************\n\n");
	int choice,no;
	printf("1: Push\n2: Pop\n3: Peek\n4: Display\n0: Exit\n\n");
	while(1)
	{
		printf("Enter Choice : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter Number : ");
			scanf("%d",&no);
			push(no);
		}
		else if(choice==2)
		{
			pop();
		}
		else if(choice==3)
		{
			printf("\n");
			peek();
			printf("\n");
		}
		else if(choice==4)
		{
			printf("\n");
			display();
		}
		else if(choice==0)
		{
			break;
		}
		printf("\n");
	}
}