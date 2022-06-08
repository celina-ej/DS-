//Stack -> Array 
#include <stdio.h>
#include <stdlib.h>
#define n 5 
int top=-1;
int stack[n];

//checking if stack is full 
int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//checking if stack is empty
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//pushing the element                                                                                                                                                                        
void push(int val)
{
	if (isfull())
	{
		printf("\nOverflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d ELEMENT PUSHED\n",val);
	}	
}
//popping the element
void pop()
{
	if (isempty())
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\n%d POPPED",stack[top]);
		stack[top]==-1;
		top--;
	}
}
void main()
{
	for(int i=0;i<n;i++)
	{
		stack[i]=-1;
	}
	printf("PROGRAM TO PERFORM OPERAIONS ON STACK");
	while(1)
	{
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				int num;
				printf("Enter value to be pushed");
				scanf("%d",&num);
				push(num);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				int i=top;
				if (isempty())
				{
				printf("No elements to display. Insert more elements");
				}
				else
				{
				while(i>=0)
				{
					if(i==top)
					{
						printf("%d--->top\n",stack[top]);
						i--;
					}
					else
					{
						printf("%d\n",stack[i]);
						i--;
					}
				}
				for(i=0;i<n;i++)
				{
					printf("%d\t",stack[i]);
				}
				}
				break;
			}
			default:
			{
				printf("invalid option");
				break;
			}
			case 4:
			{
				printf("Exiting Program...\n");
				exit(0);
			}
		}
	}	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


