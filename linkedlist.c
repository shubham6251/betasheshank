#include<stdio.h>
struct Node 
{
	String name;
	int rollno;
	struct Node *next;
}*first=NULL;
void insert(struct Node* p)
{
	
	}
int search(struct Node* p,int y)
{	
	while(p!=NULL)
	{
		if(y==p->rollno)
			return 1;
		p=p->next;
	}
}
int main()
{	int x;
	search(first,x);
	}