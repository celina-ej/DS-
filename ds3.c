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
	int ch,entry,count=0;
	while (1)
	{
		printf("\n1.Insert\n2.Display\n3.Length of LL\n4.Search for an element\n5.Exit");
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
			case 2:
			{
				pos=head;
				printf("\nElements are ");
				while(pos!=NULL)
				{
					printf("\t%d",pos->data);
					pos=pos->next;
				}
				break;
			}
			case 3:
			{
				pos=head;
				while(pos!=NULL)
				{
					printf("\t%d",pos->data);
					pos=pos->next;
					count++;
				}
				printf("\nThe elements in the LL are %d",count);
				break;
			}
			case 4:
			{
				pos=head;
				int num,flag=0;
				printf("\nEnter the element to be searched");
				scanf("%d",&num);
				while(pos!=NULL)
				{
					printf("\t%d",pos->data);
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
			
			case 5:
			{
				printf("\nGood Bye");
				exit(0);
			}
		}
	}
}

