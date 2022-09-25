#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
}*new1,*rear,*front,*temp;

//Queue'da Eleman Ekleme
void enQueue (int value)
{
    new1 = (struct queue*)malloc(sizeof(struct queue));

    new1 ->data = value;
    new1 ->next = NULL;

    if (front == NULL)
    {
        front = new1;
        rear = new1;
    }
    else
    {
        rear ->next = new1;
        rear = new1;
    }
    printf("\nInserted = %d\n",new1 ->data);
}

//Queue'da Eleman Silme
void deQueue ()
{
    temp = front;

    if(front == NULL)
    {
        printf("\nQueue is EMPTY!\n");
    }
    else
    {
        if(front == rear)
        {
            printf("\nDeleted = %d\n",front ->data);
            front = NULL;
            rear = NULL;
            free(temp);
            temp =NULL;
        }
        else
        {
            printf("\nDeleted = %d\n",front ->data);
            front = front ->next;
            temp ->next == NULL;
            free(temp);
            temp  = NULL;

        }
    }
}

void display ()
{
    temp = front;

    if (front == NULL)
    {
        printf("\nQueue is EMPTY!\n");
    }
    else
    {
        printf("Queue Elemnets are= ");
        while (temp != NULL)
        {
            printf(" %d",temp ->data);
            temp = temp ->next;
        }
        printf("\n");
    }

}

int main()
{
    display();
    enQueue(10);
    enQueue(20);
    display();
    deQueue();
    display();

    return 0;
}
