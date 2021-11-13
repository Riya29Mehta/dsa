#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *header, *last;
void create();
void show();
void sort();
int main()
{
    int i, num;
    printf("enter the number of nodes: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        create();
    }
    printf("now finally the ist is: \n");
    show();
   // sort();
   // show();
}
void create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("enter data; ");
    scanf("%d", &temp->data);

    if (header == NULL)
    {
        header = last = temp;
        return;
    }

    else
    {
        last->next = temp;
        last = temp;
    }
}
void show()
{
    struct node *t1 = header;

    while (t1 != NULL)
    {
        printf("--->%d", t1->data);
        t1 = t1->next;
    }
}
void sort()
{
    
}
