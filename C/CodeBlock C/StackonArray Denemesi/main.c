#include <stdio.h>
#include <stdlib.h>
#define max 5

int stack[max];
int top;

//Stack'e Eleman Ekleme
void push (int sayi)
{
    if (top == max-1)
    {
        printf("Stack Dolu!\n");
        return;
    }
    else
    {
        top++;
        stack[top] = sayi;
    }
}

//Stack'den Eleman Silme
void pop ()
{
   int item;

   if(top == -1)
   {
        printf("Stack Bos!\n");
   }
   else
   {
       item = stack[top];
       top--;
       return item;
   }
}

//Stackteki Elemanlari Goruntuleme
void display()
{
  if (top == -1)
  {
      printf("Stack Bos!\n");
  }
  else
  {
      printf("Stackteki Elemanlar= ");
      for(int i=top;i>=0;i--)
      {
          printf(" %d",stack[i]);
      }
  }
}

int main()
{
    top = -1;
    display();
    push(10);
    push(20);
    display();
    pop();
    display();

    return 0;
}
