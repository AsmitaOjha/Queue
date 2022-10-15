#include<stdio.h>
#include<stdlib.h>
struct queue 
{
    int size; 
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q)
{
    if(q->r==q->size-1)
    return 1;
    else 
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if(isFull(q))
    {
    printf("This queue is Full");
    }
    else{
        q->r++;
        q->arr[q->r]= val;
    }
}
int isEmpty(struct queue *q)
{
   // if(q->f==-1 || (q->f)>(q->r)){
if(q->r == q->f){
    
    return 1;
    }
    else
    return 0;
}
int dequeue(struct queue *q){
   int a=-1;
   // int val;
    if(isEmpty(q))
    {
    printf("Queue is empty");
}
    else{
        q->f++;
       a = q->arr[q->f];
        
       
    }
     return a;
}
int main()
{
    struct queue q;
    q.size = 5;
    q.f=-1;
    q.r=-1;
    q.arr = (int *)malloc(q.size*sizeof(int));
    if(isEmpty(&q)){
        printf("queue is empty\n");
    }
    enqueue(&q,12);
    enqueue(&q,7);
    enqueue(&q,6);
    enqueue(&q,5);
    enqueue(&q,4);
  //  printf("Dequeing element: %d",dequeue(&q));
    printf("\n");
    printf("Dequeuing element : %d\n",dequeue(&q));
      printf("Dequeuing element : %d\n",dequeue(&q));
        printf("Dequeuing element : %d\n",dequeue(&q)); 
         printf("Dequeuing element : %d\n",dequeue(&q));


//  if(isFull(&q))
//  {
//     printf("Queue is full\n");
//  }
  

 
    return 0;
}