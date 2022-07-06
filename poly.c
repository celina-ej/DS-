#include <stdio.h>
#include <stdlib.h>
void main()
{
	struct node 
	{
		int data1;
		int data2;
		struct node *next;
	};
	struct node *head1=NULL,*pos1=NULL,*tail1=NULL,*head2=NULL,*pos2=NULL,*tail2=NULL,*head3=NULL,*pos3=NULL,*tail3=NULL;
	int coef,power,i,sumcoef;
	printf("\nEnter terms of each polynomial from largest power to smallest power");
	printf("\nEnter largest power value out of both polynomials:");
	scanf("%d",&power);
	printf("Entering terms of first polynomial");
	for(i=power;i>=0;i--)
	{
		printf("\nEnter coefficient for x^%d:",i);
		scanf("%d",&coef);
		if (head1==NULL)
		{
			head1=(struct node*)malloc(sizeof(struct node));
			head1->data1=coef;
			head1->data2=i;
			pos1=head1;
			tail1=head1;
		}
		else
		{
			tail1->next=(struct node*)malloc(sizeof(struct node));
			tail1=tail1->next;
			tail1->data1=coef;
			tail1->data2=i;
		}
	}
	printf("Entering terms of second polynomial");
	for(i=power;i>=0;i--)
	{
		printf("\nEnter coefficient for x^%d:",i);
		scanf("%d",&coef);
		if (head2==NULL)
		{
			head2=(struct node*)malloc(sizeof(struct node));
			head2->data1=coef;
			head2->data2=i;
			pos2=head2;
			tail2=head2;
		}
		else
		{
			tail2->next=(struct node*)malloc(sizeof(struct node));
			tail2=tail2->next;
			tail2->data1=coef;
			tail2->data2=i;
		}
	}
	for(i=power;i>=0;i--)
	{
		sumcoef=pos1->data1+pos2->data1;
		printf("%d",sumcoef);
		pos1=pos1->next;
		pos2=pos2->next;
		if(head3==NULL)
		{
			head3=(struct node*)malloc(sizeof(struct node));
			head3->data1=sumcoef;
			head3->data2=i;
			pos3=head2;
			tail3=head3;
		}
		else
		{
			tail3->next=(struct node*)malloc(sizeof(struct node));
			tail3=tail3->next;
			tail3->data1=sumcoef;
			tail3->data2=i;
		}
	}
	pos3=head3;
	printf("\n Sum of polynomials is ");
	for(i=power;i>=0;i--)
	{
		if(i==0)
		{
			printf("%d\n",pos3->data1);
		}
		else
		{
			printf("%dx^%d+",pos3->data1,pos3->data2);
		}
		pos3=pos3->next;
	}
	
	
	
}
