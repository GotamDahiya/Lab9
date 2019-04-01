#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node{
	int a;
	int b;
	struct node	*next;
	struct node *prev;
};
void insert(int x,int y)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->a=x;
	temp->b=y;
	temp->next=head;
	head=temp;
}