//INSERTION's at Linked List
#include<stdio.h>
#include<malloc.h>

struct Node
{
	int data;
	struct Node *add;
};

void insertatStart(int data, struct Node** head)    //INSERTION AT START
{
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->add=*head;
	*head=node;
	return;
}

 void insertatend(int data, struct Node** head)    //INSERTION AT END
 { 
    struct Node* s;
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
 	node->data=data;
 	node->add=NULL;
 	if(head==NULL)
 	{
 		*head=node;
	}
	s=*head;
	while(s->add!=NULL)
	{
	 	s=s->add;
	}
	s->add=node;
	return;
 }
 
 void insertatSpecific(int data ,struct Node** head ,int data_after)  //INSERTION AT SPECIFIC POSITION 
 {
 	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
 	node->data=data;
 	node->add=NULL;
 	struct Node* s=*head;
 	while(s->data!=data_after)
 	{
 		s=s->add;
	}
	node->add=s->add;
	s->add=node;
	return;
}
 
 void displayLL(struct Node* head)      //DISPLAY LINKED LIST
 {
 	struct Node* p=head;
 	while(p!=NULL)
 	{
 		printf("%d->",p->data);
 		p=p->add;
	 }
	 return;
 }


 int main()
 {
 	struct Node* head=NULL;
	int data, choice,data_after;
	while(1)
	{
		int data;
 	    printf("linked list menu\n");
 	    printf("1. Insert at Start\n");
 	    printf("2. Insert at End\n");
 	    printf("3. Insert at Specific Position\n");
 	    printf("4. Display Linked List\n");
 	    printf("Enter your choice \n");
 	    scanf("%d",&choice);
 	    switch(choice)
 	{
 	   case 1:  printf("enter data");
 	            scanf("%d",&data);
		     	insertatStart(data,&head);
 	            break;
 	            
 	   case 2:printf("enter data");
 	          scanf("%d",&data); 
		      insertatend(data,&head);
			  break;
	   case 3:printf("enter data");
              scanf("%d",&data);
			  printf("enter the after data");
			  scanf("%d",&data_after);
			  insertatSpecific(data,&head,data_after);
			  break;
      case 4: displayLL(head);
               break;
	   default: printf("invalid case");
		       
 	             
	}
 }
}
