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
void insert_first();

int main()
{
    int i, num;
    printf("enter the number of nodes: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        create();
    }
    printf("now finally the list is: \n");
    show();
    printf("\n\ninsertion of element at first position: \n");
    insert_first();
    show();
}
void create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("enter data: ");
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
void insert_first()
{
    struct node *first;

    first = (struct node *)malloc(sizeof(struct node));
    printf("enter the data at first position: ");
    scanf("%d", &first->data);
    first->next = header;
    header = first;
}
