#include<stdio.h>
#include<stdlib.h>

struct node
{
		int data;
		struct node *next;
};
struct node *sp=(struct node*)0;
int stat;
void main()
{
		void push(int);
		int pop();
		int search(int);
		int c,d,k=1,m;
		do
		{
				printf("\n");
				printf("----------------------Singly stack operation-------------------------\n");
				printf("1.Push\n");
				printf("2.Pop\n");
				printf("3.Search\n");
				printf("4.Exit\n");
				printf("Enter your choice: \n");
				scanf("%d",&c);
				switch(c)
				{
					case 1:printf("Enter some data to push\n");
							  scanf("%d",&d);
							  push(d);
							  break;	
					case 2:d=pop();
							  if(stat==1)
							  printf("Poped item is: %d\n",d);							 
							  break;	
					case 3:printf("Enter the data to be search\n");
							  scanf("%d",&m);
							  k=search(m);
							  if(k==1)
							  {
							  printf("Item not found..\n");
							  }
							  /*else
							  {
							   printf("Item found");
							   }*/
							   break;
			        case 4:printf("Exiting...");
							  exit(0);
					}
		}
		while(1);
}
void push(int x)
{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=sp;
		sp=newnode;
}
int pop()
{
		int a;
		struct node *temp;
		if(sp==(struct node*)0)
		{
		printf("Empty stack \n");
		stat=0;
		}
		else
		{
		a=sp->data;
		temp=sp;
		sp=sp->next;
		free(temp);
		stat=1;
		return a;
		}
}
	int search(int x)
{
		struct node *ptr;
		ptr=sp;

		while(ptr!=(struct node*)0 )
		{
			if(ptr->data==x)
			{
					printf("Item found....\n");
					return 0;
			}
			ptr=ptr->next;
		}
		return 1;
}








							

