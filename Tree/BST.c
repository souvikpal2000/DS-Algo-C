#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	struct node *leftAddress;
	int data;
	struct node *rightAddress; 
}Node;

Node *tree=NULL;

void insert(int no)
{
	Node *newNode, *flag, *ptr;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->leftAddress = NULL;
	newNode->data = no;
	newNode->rightAddress = NULL;
	if(tree==NULL)
	{
		tree = newNode;
	}
	else
	{
		ptr = tree;
		int left,right;
		while(ptr!=NULL)
		{
			if(no < ptr->data)
			{
				left = 1;
				right = 0;
				flag = ptr;
				ptr = ptr->leftAddress;
			}
			else if(no > ptr->data)
			{
				left = 0;
				right = 1;
				flag = ptr;
				ptr = ptr->rightAddress;
			}
		}
		if(left==1 && right==0)
		{
			flag->leftAddress = newNode;
		}
		else if(left==0 && right==1)
		{
			flag->rightAddress = newNode;
		}
	}
}
void delete(int no)
{
	
}
void preOrder(Node *tree)
{
	if(tree!=NULL)
	{
		printf("%d\t",tree->data);
		preOrder(tree->leftAddress);
		preOrder(tree->rightAddress);
	}
}
void inOrder(Node *tree)
{
	if(tree!=NULL)
	{
		inOrder(tree->leftAddress);
		printf("%d\t",tree->data);
		inOrder(tree->rightAddress);
	}
}
void postOrder(Node *tree)
{
	if(tree!=NULL)
	{
		postOrder(tree->leftAddress);
		postOrder(tree->rightAddress);
		printf("%d\t",tree->data);
	}
}
int main()
{
	printf("Binary Search Tree\n");
	printf("******************\n\n");
	printf("1: Insert\n2: Delete\n3: Preorder Traversal\n4: Inorder Traversal\n5: Postorder Traversal\n0: Exit\n\n");
	int choice,no;
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
			printf("Enter Number to be Deleted : ");
			scanf("%d",&no);
			delete(no);
		}
		else if(choice==3)
		{
			printf("\n");
			preOrder(tree);
			printf("\n");
		}
		else if(choice==4)
		{
			printf("\n");
			inOrder(tree);
			printf("\n");
		}
		else if(choice==5)
		{
			printf("\n");
			postOrder(tree);
			printf("\n");
		}
		else if(choice==0)
		{
			break;
		}
		printf("\n");
	}
}