#include <stdio.h>
#include <stdlib.h>
#include "stackFunctions.h"

void createEmptyStack(st *s)
{
    s->top=-1;
}

int IsFull(st *s)
{
    if(s->top==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsEmpty(st *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push (int newItem,st*s)
{
    if(IsFull(s))
    {
        printf("stack is full\n");
    }
    else
    {
        s->top++;
        s->items[s->top]=newItem;
    }
}

void pop (st* s)
{
    if(IsEmpty(s)){
        printf("Stack is empty\n");
    }
    else{
        printf("Item removed = %d\n",s->items[s->top]);
        s->top--;
    }
}

void printStack(st *s)
{
    for(int i=0;i<=s->top;i++)
    {
        printf("%d\t",s->items[i]);
    }
    printf("\n");
}
void printTopOfStack(st *s)
{
    printf("Top of stack = %d\n",s->items[s->top]);
}
