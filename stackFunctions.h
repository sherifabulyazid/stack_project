#ifndef _STACKFUNCTIONS_H_
# define _STACKFUNCTIONS_H_
#define MAX 10
struct Stack{
int items[MAX];
int top;
};
typedef struct Stack st;
void createEmptyStack(st *s);
int IsFull(st *s);
int IsEmpty(st *s);
void push (int newItem,st*s);
void pop (st* s);
void printStack(st *s);
void printTopOfStack(st *s);


#endif