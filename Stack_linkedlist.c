#include<stdio.h>

struct Stack2
{
    int data;
    struct Stack2* next;
};

struct Stack2* createnode(int new_data)
{
    struct Stack2* node;
    node = (struct Stack2*)malloc(sizeof(struct Stack2));
    node->data = new_data;
    node->next = 0; //NULL
    return node;
}

void pushData(struct Stack2** top, int data )
{
    struct Stack2* new_node;
    new_node = createnode(data);
    new_node->next=*top;
    *top=new_node;
    //return;
}

void popdata (struct Stack2** top)
{
     //struct Stack2* temp = (struct Stack2*)malloc(sizeof(struct Stack2));
      temp = *top;
     *top = *top->next;
      int popped_data = temp-> data;
      free(temp);

}

main()
{
    struct Stack2* top= 0;
    push(&top, 10);
    push(&top,20);
    push(&top,30);

    //printf("Top element %d  ",)
    return 0;
}
