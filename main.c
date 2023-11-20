#include <stdio.h>
#include <stdlib.h>
#include "stackFunctions.h"

int main()
{
    st *ptrstack = (st *)malloc(sizeof(st));
    createEmptyStack(ptrstack);
    int option = 0;
    int value = 0;
    while (1)
    {
        printf("options:\n1- push\n2- pop\n3- print stack\n4- print last element\n5- Exit\nEnter Option: ");
        scanf(" %d", &option);
        switch (option)
        {
        case 1:
            printf("enter value: ");
            scanf(" %d", &value);
            push(value, ptrstack);
            break;
        case 2:
            pop(ptrstack);
            break;
        case 3:
            printStack(ptrstack);
            break;

        case 4:
            printTopOfStack(ptrstack);
            break;
        default:
            break;
        }
        if (option == 5)
            break;
        printf("===========================================================\n");
    }
    free(ptrstack);
    return 0;
}
