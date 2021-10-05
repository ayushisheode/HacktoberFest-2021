#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * p){
    if (p->top==-1)
        return 1;
    else 
        return 0;
}

int isFull(struct stack *p){
    if (p->top == p->size-1)
        return 1;
    else 
        return 0;
}

void push(int val , struct stack *ptr){
    if (isFull(ptr))
        printf("Stack overflow");
    else{
        ptr->top++;
        ptr->arr[ptr->top]= val;
    }
}

int peek(struct stack *ptr, int i){
    if (ptr->top+1-i < 0)
        printf("Invalid number try again!!!!");
    else {
        printf("%d\n", ptr->arr[ptr->top-i+1]);
    }
}

void pop(struct stack *ptr){
    if (isEmpty(ptr))
        printf("Stack underflow");
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("The value to be deleted = %d\n", val);
    }
}

void main(){
    struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *) malloc (sp->size *sizeof(int));  
    // printf("%d\n",isEmpty(sp));
    // printf("%d\n",isFull(sp));
    push(5,sp);
    push(12,sp);
    push(3,sp);
    push(10,sp);
    // printf("%d\n",isEmpty(sp));
    // printf("%d\n",isFull(sp));
    // pop(sp);
    // printf("%d\n",isEmpty(sp));
    // printf("%d\n",isFull(sp));
    peek(sp,2);
}