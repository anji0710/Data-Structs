#include<stdio.h>

// Creating Structure of Stack
struct Stack1
{
    int top ;
    unsigned capacity;
    int* array1;
};

// Function to initialise Stack variables
struct Stack1* createstack(unsigned capacity)
{
    struct Stack1* s1 = (struct Stack1*)malloc(sizeof(struct Stack1));
    s1->top = -1;
    s1-> capacity;
    s1->array1 = (int*) malloc(s1->capacity * sizeof(int));
    return s1;
};

// Check if stack is full
int isfull(struct Stack1* s1)
{
    if(s1->top == s1->capacity -1)
        return 0;
}

// Check if stack is empty
int isempty(struct Stack1* s1)
{
    if(s1->top==-1)
        return -1;
}

// Inserting values in a Stack
void push(struct Stack1* s1, int n)
{
    if(isfull(s1)== 0)
        return;
    ++s1->top;
    s1->array1[s1->top] = n;
    printf("Pushed letter %d" , n);
}

// Deleting Values from Stack
void pop(struct Stack1* s1)
{
    if(isempty(s1)== -1)
        return;
    s1->array1[--s1->top];
    return s1->array1;
}

// Creating stack and calling out Push-Pop Functions
void main()
{
    struct Stack1* s3;
    s3 = createstack(20);
    push(s3,4);
    push(s3,6);
    push(s3,8);
    pop(s3);

    int temp = s3->top;
    while(temp!= -1)
    {
        printf("%d",s3->array1[temp]);
        temp--;

    }
    return 0;

}
