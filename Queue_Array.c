#include<stdio.h>

// Creating a structure to hold queue variables
struct Queue
{
    int front, rear, data,sz;
    unsigned capacity;
    int* arr1;
};

// Creating a queue, initializing capacity, size, front, rear
struct Queue* CreateQueue(unsigned capacity)
{
    struct Queue* q1 = (struct Queue*) malloc(sizeof(struct Queue));
    q1->capacity = capacity;
    q1->front = q1->sz = 0;
    q1->rear = 0;
    q1->arr1 = (int*) malloc(q1->capacity * sizeof(int));
    return q1;

}

// Inserting values in a queue
void enqueue(struct Queue* q1,int data)
{
    if(q1->rear==q1->capacity-1)
      {
          printf("Full");
          return;
      }

    q1->arr1[q1->rear ++] = data;
    q1->sz = q1->sz+1;

    printf("Enqueued ___%d\n",data);

}

// Deleting values from a queue
void dequeue(struct Queue* q1)
{
    if(q1->rear==0)
       {
         printf("Empty");
         return;
       }

     int item = q1->arr1[q1->front];
     q1->arr1[q1->front]=q1->arr1[++q1->front];
     q1->sz = q1->sz+1;
     q1->rear = q1->rear-1;
     printf("%d\n",item);

     return q1;
}

// Creating Queue and Calling Enqueue/Dequeue
main()
{
    struct Queue* q2 = CreateQueue(5);
    enqueue(q2,4);
    enqueue(q2,5);
    enqueue(q2,6);
    enqueue(q2,7);
    dequeue(q2);
    dequeue(q2);
    int temp = 0;
    while(temp!=q2->rear)
    {
        printf("%d",q2->arr1[temp]);
        temp = temp+1;
    }

    return 0;

}


