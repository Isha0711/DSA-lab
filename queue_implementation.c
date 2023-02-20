#include <stdio.h>
#include <stdlib.h>
#define maxsize 3
void enq(void);
void deq(void);
void display(void);

int q[maxsize],front=0,rear=-1;
int main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1 to insert number in the queue\n2 for deleting from the queue\n3 for Display\n4 for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enq();
                break;
            case 2:
                deq();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.");
                break;
        }
 
    }
    return 1;
}
void enq(void)
{
    int n;
    if (rear==maxsize-1)
    {
        printf("Queue is full\n");
        return;
    }
    if (front==0)
    {
        printf("Enter the number to enter to queue:\n");
        scanf("%d",&n);
        rear++;
        q[rear]=n;
        printf("Number entered in the queue.\n");
    }
}
void deq(void)
{
    //int n;
    if (front>rear)
    {
        printf("Queue is empty.\n");
        return;
    }
    front++;
//n=q[front];
    printf("Number deleted from queue.\n");
}
void display(void)
{
    int i;
    
    if (front>rear)
    {
        printf("Queue is empty.\n");
        return;
    }
    for (i=front;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }
}

