#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;
//Node *head;
Node* create_new_node(int a)
{
    int b=a;
    //printf("Enter the value");
   // scanf("%d",&a);
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    p->data=b;
    p->next=NULL;
    return p;
}
Node* insert(Node *head,int data)
{
    if(head == NULL)
    {
       head = create_new_node(data);
    }

    else{
      Node *temp;
    temp=create_new_node(data);
    head->next = temp;
    }
    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);

}
