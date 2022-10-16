#include<stdio.h>
#include<malloc.h>
#define Maxsize 40
int C_queue[Maxsize];
int front =-1;
int rear=-1;


int isFull()
{
    if(front==(rear+1)%Maxsize)
    {
        printf("Circular queue is full");
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty()
{
    if(front==-1)
    {
        printf("Circular queue is empty");
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue()
{
    int item;
    if(isFull()==1)
    {
        printf("Circular Queue is Full");
    }
    else
    { 
        printf("\nEnter the element to be inserted : ");
        scanf("%d",&item);
          if(front==-1 )
        {
           front=0;
           rear=0;
            C_queue[rear]=item;
        }
        else{
            rear=(rear+1)%Maxsize;
             C_queue[rear]=item;
        }
       
        printf("Item is inserted successfully\n");
    }
}
int dequeue()
{ 
    int item;
    if(isEmpty()==1)
    {
        printf("Circular Queue is Empty\n");
    }
    else{
        item=C_queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%Maxsize;
        }
        return item;
    }
}
void display()
{
    int i;
    if(isEmpty()==1){
        printf("circular queue is empty\n");
    }
    else {
    for(i=front;i<rear; i=(i+1)%Maxsize)
    {
        printf("%d\n",C_queue[i]);
    }
    }
}
int main(){
//     isEmpty();
//     enqueue();
//   //  enqueue();
//     //isEmpty();
 int choice;
    
 while(choice!=4)
     {
             printf("1. Insert\n");
            printf("2.Delete\n");
        printf("3.Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            enqueue();
            break;
            case 2: printf("The deleted element is: %d\n ",dequeue());
            break;
            case 3: printf("The element of circular queue are:  \n");
            display();
            break;
            case 4: exit(0);
            break;
            default:
            printf("Invalid choice\n");

            
       }
        
        
   }
}
