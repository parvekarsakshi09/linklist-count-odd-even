#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
};
int count_node(struct node *head)
{


  int count1 = 0;
  int count2 = 0;
struct node *ptr =  head;
 while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->link;
 }

 printf("\n\n\n");
 ptr=  head;
   printf("Odd nodes are-> ");
  while (ptr!= NULL)
  { 

    if ((ptr->data) % 2 != 0)
    {
       printf("\t%d",ptr->data);
      count1++;

    }
    ptr=ptr->link;

    }
     printf("\n");
    printf("Even nodes are-> ");
 ptr =  head;
    while (ptr != NULL)
  {

    if ((ptr->data) % 2 == 0)
    {
       printf("\t%d ",ptr->data);
      count2++;

    }
    ptr=ptr->link;

    }


  printf("\n\n odd nodes are %d,\t", count1);
  printf("Even nodes are %d,\t", count2);

  return count1+count2;
}
int main()
{
  struct node *head = (struct node *)malloc(sizeof(struct node));
  struct node *first = (struct node *)malloc(sizeof(struct node));
  struct node *second = (struct node *)malloc(sizeof(struct node));
  struct node *third = (struct node *)malloc(sizeof(struct node));
  struct node *fourth = (struct node *)malloc(sizeof(struct node));
  struct node *fifth = (struct node *)malloc(sizeof(struct node));
  struct node *sixth = (struct node *)malloc(sizeof(struct node));
  struct node *seventh = (struct node *)malloc(sizeof(struct node));
  struct node *eighth = (struct node *)malloc(sizeof(struct node));
  struct node *ninth = (struct node *)malloc(sizeof(struct node));
  struct node *tenth = (struct node *)malloc(sizeof(struct node));

  head->data = 1;
  first->data = 2;
  second->data = 3;
  third->data = 4;
  fourth->data = 5;
  fifth->data = 6;
  sixth->data = 7;
  seventh->data = 8;
  eighth->data = 9;
  ninth->data = 10;
  tenth->data = 11;

  head->link = first;
  first->link = second;
  second->link = third;
  third->link = fourth;
  fourth->link = fifth;
  fifth->link = sixth;
  sixth->link = seventh;
  seventh->link = eighth;
  eighth->link = ninth;
  ninth->link = tenth;
  tenth->link = NULL;
  printf("Linked list is->\n");
  int z = count_node(head);
  printf("%d Nodes are there", z);
}

