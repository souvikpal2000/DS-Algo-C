#include <stdio.h>
#define MAX 5

int arr[MAX];
int front=-1, rear=-1;

void insert(int no)
{
	if(rear+1 == MAX)
	{
		printf("\nQueue Overflow\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		arr[rear] = no;
	}
	else
	{
		rear = rear + 1;
		arr[rear] = no;
	}
}
void delete()
{
	if(front>rear)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		front = front + 1;
	}
}
void peek()
{
	if(front==-1)
	{
		printf("\nQueue Empty\n");
	}
	else
	{
		printf("\nTopmost Element : %d\n",arr[front]);
	}
}
void display()
{
	if(front>rear || (front==-1 && rear==-1))
	{
		printf("\nQueue Empty\n");
	}
	else
	{
		int i;
		printf("\nFRONT\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",arr[i]);
		}
		printf("REAR\n");
	}
}
int main()
{
	printf("Queue using Array\n");
	printf("*****************\n\n");
	int choice,no;
	printf("1: Insert\n2: Delete\n3: Peek\n4: Display\n0: Exit\n\n");
	while(1)
	{
		printf("Enter Choice : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter Number : ");
			scanf("%d",&no);
			insert(no);
		}
		else if(choice==2)
		{
			delete();
		}
		else if(choice==3)
		{
			peek();
		}
		else if(choice==4)
		{
			display();
		}
		else if(choice==0)
		{
			break;
		}
		printf("\n");
	}
}