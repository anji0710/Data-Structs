#include<stdio.h>

// Creating a node to hold data and address
struct QNode
{
    int data;
    struct QNode* next;
};

// Creating(Defining) Queue's end -- Front / Rear
struct Queue
{
    int *rear,*front;
};

// Function to create and initialise a new node
struct QNode* New_node(int data)
{
    struct QNode* q1 = (struct QNode*)malloc(struct QNode);
    q1->data = data;
    q1->next = NULL;
};
// Function to create Queue.
struct Queue* CreateQueue()
{
    struct Queue* q2 = (struct Queue*)malloc(struct Queue);
    q2->rear=q2->front = 0;
    return q2;
};

void enqueueue(struct Queue* q,int data)
{
    struct QNode* temp = New_node(data);
    // If queue is empty, then new node is both front as well as rear
    if (q->rear == NULL)
    {
       q->front = q->rear = temp;
       return;
    }

    //temp becomes new rear
    q->rear->next = temp;
    q->rear = temp;
}

struct QNode *deQueue(struct Queue *q)
{
    // If queue is empty, return NULL.
    if (q->front == NULL)
       return NULL;

    struct QNode *temp = q->front;
    q->front = q->front->next;

    // If front becomes NULL, then change rear also as NULL
    if (q->front == NULL)
       q->rear = NULL;
    return temp;
}

main()
{
    struct Queue *q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    struct QNode *n = deQueue(q);
    if (n != NULL)
      printf("Dequeued item is %d", n->key);
    return 0;
}
