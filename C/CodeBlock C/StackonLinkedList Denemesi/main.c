#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

//Stack'e Eleman Ekleme
void push (int sayi)
{
    struct node *newNode = malloc(sizeof(struct node));

    newNode ->data = sayi;
    newNode ->next = head;

    head = newNode;
}

//Stack'ten Eleman Silme
void pop()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("Stack Bos!\n");
    }
    else
    {
        printf(" Silinen Eleman = %d",head ->data);
        temp = head;
        head = head ->next;
        free(temp);
    }
}

void display()
{
    struct node *temp = head;

    printf(" Stackteki Elemanlar= ");

    while(temp != NULL)
    {
         printf(" %d", temp->data);
         temp = temp->next;
    }




}

int main()
{
    display();
    push(10);
    push(20);
    display();
    pop();
    display();

    return 0;
}
