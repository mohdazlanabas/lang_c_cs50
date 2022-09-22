#include<stdio.h>
#include<stdlib.h>

// * is for pointers and deference
// & indicate address 0x123.....
// % use to instantiate a value (string or number)
// Linked List - Linking one list to another in memory
// Binary Tree
// Hash Map
// 0x0 end of list
// Machine Code -> Global Code -> HEAP + STACK
// Heap canbe allocated and control via Malloc
// Node is portion of a Linked List
// Node is number + poimter

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

// int *tmp = malloc(4 * sizeof(int));
int *tmp = realloc(list, 4 * sizeof(int));
if (tmp == NULL)
{
    free(list);
    return 1;
}
/* 
for (int i = 0; i < 3; i++)
{
    tmp[i]= list [i];
}
 */    
    tmp[3] =4;
    // free(list);
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    return 0;
}