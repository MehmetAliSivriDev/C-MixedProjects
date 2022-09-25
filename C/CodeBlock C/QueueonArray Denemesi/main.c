#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int items[SIZE], front = -1 , rear = -1;

//Queue'da Eleman Ekleme
void enQueue (int value)
{
    if (rear == SIZE -1)
    {
        printf("\nQueue is FULL!\n");
    }
    else
    {
        if (front == -1)
        {
        front = 0;
        }
        rear++;
        items[rear] = value;
        printf("\nInserted = %d\n",value);
    }
}

//Queue'da Eleman Silme
void deQueue ()
{
    if (front == -1)
    {
        printf("\nQueue is EMPTY!\n");
    }
    else
    {
       printf("\nDeleted = %d\n",items[front]);
       front++;

        if(front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

}

void display ()
{
    if (rear == -1)
    {
        printf("\nQueue is EMPTY!\n");
    }
    else
    {
        printf("\nQueue Elements are= ");

        for(int i = front;i<=rear;i++)
        {
            printf(" %d",items[i]);
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
