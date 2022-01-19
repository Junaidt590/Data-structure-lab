//doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
		int data;
		struct node *left,*right;
};
struct node *start=(struct node*)0;
void main()
{
		void insert(int);
		struct node* search(int);
		void delete(int);
		struct node *temp;
		int c,a,b;
		do
		{
		printf("-------------Doubly linked list-------------\n");
		printf("1.Insert\n");
		printf("2.Search\n");
		printf("3.Delete\n");
		printf("4.Exit\n");
		printf("Enter the choice..\n");
		scanf("%d",&c);
		switch(c)
		{
				case 1:printf("Enter a data to insert:\n");
						  scanf("%d",&a);
						  insert(a);
						  break;
				case 2:printf("Enter a data to search:\n");
						  scanf("%d",&b);
						  temp=search(b);
						  if(temp==(struct node*)0)
						  printf("Not found...\n");
						  else
						  printf("Found...\n");
						  break;
				case 3:printf("Enter data to delete..\n");
						  scanf("%d",&a);
						  delete(a);
						  break;
				case 4:printf("Exiting..\n");
						  exit(0);
		}
		}
		while(1);
}
//function to insert a node at begining
void insert(int x)
{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		if(start==(struct node*)0) //case of empty list
		{
				newnode->left=newnode->right=(struct node*)0;
				start=newnode;
		}
		else //case of atleast one node
		{
		newnode->left=(struct node*)0;
		newnode->right=start;
		start->left=newnode;
		start=newnode;
		}
}
//function to search an item
struct node* search(int d)
{
		struct node *ptr;
		ptr=start;
		while(ptr!=(struct node*)0 && ptr->data!=d) //ptr not equal to zero
				{
						ptr=ptr->right;
				}
				return ptr; //ptr 0 implies not found, 1 implies found
}
//fuction to delete 
void delete(int x)
{
struct node *t;
t=search(x); //calling search to find whether that data exists or not
//printf("%d",t->data);
if(t==0)
{
		printf("No such element exists...\n");
}
else //element exists case
{
	printf("Item deleted...\n");
		if(t==start) //case of first node

		if(t->right==(struct node*)0) //case of only having one node
		{
				start=(struct node*)0;
		}
		else //case of having more than one node
		{
				t->right->left=(struct node*)0;
				start=t->right;
		}
		else if(t->right==(struct node*)0) //case of last node
		{
				t->left->right=t->right;
		}
		else  //case of interior node
		{
				t->left->right=t->right;
				t->right->left=t->left;
		}
}
free(t);
}


