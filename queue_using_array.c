#include<stdio.h>
#include<stdlib.h>
#define Max 50
int queue[Max];
int rear=-1;
int front=-1;
int isFull()
{
    if(rear== Max-1)
    return 1;
    else 
    return 0;
}
int isEmpty()
{
    if(front>rear || front == -1)
    return 1;
    else
    return 0;
}
void enqueue()
{
    int item;
    printf("Enter the item to be inserted in the queue\n");
    scanf("%d", &item);
    if(isFull()==1)
    {
        printf("Queue is Full");
    }
    else{
 if(rear==-1 && front==-1)
 {
    rear=front=0;
 }
 else{
    rear=rear+1;
 }
 queue[rear]=item;
 printf("Value insertion successfull !!!");
    }
}
int dequeue()
{ int item;
    if(isEmpty()==1)
    printf("Queue is empty");
    else
    {
        item=queue[front];
        front=front+1;
    }
    return item;
    printf("Value deletion successfull !!!");
    
}
int peek()
{
    if(isEmpty()==1)
    printf("Queue is empty\n");
    else
    {
        return queue[front];
    }
}
void display()
{
    int i;
    if(isEmpty()==1)
    printf("Queue is Empty: No data !!!");
    else
    printf("Elements in the queue are: \n");
    for(i=front; i<=rear; i++)
    {
        printf("%d\n",queue[i]);
    }
    printf("\n");
}
int main()
    {
                int choice;
                while(choice!=5)
                {
                    
                                            printf("\n ******** Main Menu ************** \n");
                                            printf("\n 1. Insert");
                                        printf("\n 2. Delete");
                                    printf("\n 3. Display");
                                printf("\n 4. Peek");
                            printf("\n 5. Exit");
                    printf("\n Enter your choice: \t");
                    scanf("%d",&choice);

                                    switch(choice)
                    {
                        case 1: enqueue();
                                break;
                        case 2: printf("The deleted item is : %d", dequeue());
                                break;
                        case 3: display();
                                break;
                        case 4: printf("the element is the front end is %d",peek());
                                break;
                        case 5: exit(0);
                               break;
                        default:
                                printf("\n Wrong choice\n");
                    }
    
   

                }
    }
