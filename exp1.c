//WAP 1.insertion 2.deletion 3.traversal 4.search
#include <stdio.h>
#include <stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head =NULL, *pos=NULL, *tail=NULL;
	int ch,entry;
	while (1)
	{
		printf("\n\n1.Insert\n2.Delete\n3.Search\n4.Traverse\n5.Exit\n");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter Data");
				scanf("%d",&entry);
				if (head == NULL)
				{
					head =(struct node*)malloc(sizeof(struct node*));
					head->data=entry;
					pos=head;
					tail=head;
				}
				else 
				{
					tail->next=(struct node*)malloc(sizeof(struct node*));
					tail=tail->next;
					tail->data=entry;
				}
				break;
			}
			case 2://Delete
			{
				struct node *temp=head;
				printf("\n Enter position of data :");
				scanf("%d",&entry);
				if(entry==0)
				{
					head=head->next;
					temp->next=NULL;
					free(temp);
				}
				else
				{
					for (int i=0;i<entry-1;i++)
					{
						temp=temp->next;
					}
					struct node *del=temp->next;
					temp->next=temp->next->next;
					del->next=NULL;
					free(del);
				}
				break;
			}
			case 4://Traverse
			{
				pos=head;
				while(pos!=NULL)
				{
					printf("\t%d\t",pos->data);
					pos=pos->next;
				}
				break;	
			}
			case 3://Search
			{
				pos=head;
				int num,flag=0;
				printf("\nEnter the element to be searched");
				scanf("%d",&num);
				while(pos!=NULL)
				{
					//printf("\t%d",pos->data);
					if (num==(pos->data))
					{
						printf("Element found");
						printf("\t%d",pos->data);
						flag=1;
						break;
					}
					pos=pos->next;	
				}
				if(flag==0)
				{
					printf("Element not found");
				}
				break;
			}
			
			case 5://exit
			{
				printf("\nGood Bye");
				exit(0);
			}
			default:
			{
				printf("Wrong option");
			}
		}
	}
}
