//Doubly linked list 1.insertion at beginning 2.inserting at end 3.deletion at beginning 4.deletion at end
#include <stdio.h>
#include <stdlib.h>
/*int display(struct node *head)
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	return 0;
}*/
int main()
{
	struct node
	{
		int data;
		struct node *prev;
		struct node *next;
	};
	int c=0;
	struct node *head=NULL;
	struct node *tail=NULL;
	struct node *pos=NULL;
	while(1)
	{
		int ch;
		printf("\nMenu\n");
		printf("\n1.Insertion at beginning");
		printf("\n2.Insertion at the end");
		printf("\n3.Deletion at beginning");
		printf("\n4.Deletion at the end");
		printf("\n5.Display");
		printf("\n6.Display in Reverse");
		printf("\n7.Exit");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1://insertion at the beginning
		{
			if(head==NULL)
			{
				c++;
				struct node *new;
				//printf("hi");
				new=malloc(sizeof(struct node));
				//printf("hi");
				head=new;
				//printf("hi");
				tail=new;
				//printf("hi");
				printf("Enter an integer");
				int num=10;
				scanf("%d",&num);
				head->data=num;
				printf("\ndone");	
				//display(*head);
			}
			else
			{
				c++;
				int num;
				struct node *new;
				new=malloc(sizeof(struct node));
				new->prev=NULL;
				new->next=NULL;
				//head=new;
				new->next=head;
				head->prev=new;
				head=new;
				printf("Enter your data");
				scanf("%d",&num);
				head->data=num;
				printf("done");
				//display(*head);
			}
			break;
		}
		case 2://insertion at the end
		{
			c++;
			int num;
			struct node *new;
			new=malloc(sizeof(struct node));
			new->prev=NULL;
			new->next=NULL;
			new->prev=tail;
			tail->next=new;
			printf("Enter a number");
			scanf("%d",&num);
			tail=new;
			tail->data=num;
			printf("done");
			//display(*head);
			break;		
		}
		case 3://deletion at the beginning
		{
			c--;
			if (c==0)
			{
				head=NULL;
				tail=NULL;
			}
			if(head!=NULL)
			{
			pos=head;
			head=head->next;
			head->prev=NULL;
			pos->next=NULL;
			free(pos);
			//display(*head);
			}
			else
			{
				printf("No elements to be deleted");
			}
			break;
		}
		case 4://deletion at the end 
		{
			c--;
			if (c==0)
			{
				head=NULL;
				tail=NULL;
			}
			if (head!=NULL)
			{
			pos=tail;
			tail=tail->prev;
			pos->prev=NULL;
			tail->next=NULL;
			free(pos);
			}
			else
			{
				printf("No elements to be deleted");
			}
			break;
		}
		case 5://display
		{
			pos=head;
			while(pos!=NULL)
			{
				printf("%d\t",pos->data);
				pos=pos->next;
			}
			break;
		}
		case 6://display in reverse
		{
			pos=tail;
			while(pos!=NULL)
			{
				printf("%d\t",pos->data);
				pos=pos->prev;
			}
			break;
		}
		case 7://exit
		{
			exit(0);
		}
		default:
		{
			printf("Invalid Option");
			break;
		}
		}
	}
}  

