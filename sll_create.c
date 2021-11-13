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

int main()
{
    int num, i;
    printf("enter the number of nodes: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        create();
    }
    printf("now finally the lsit is: \n");
    show();
}
void create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("ener data: ");
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