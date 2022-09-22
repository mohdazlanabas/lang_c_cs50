
#include<stdio.h>
#include"cs50.h"

// gcc -o hello hello.c cs50.c

void meow(int n);

int main(void) 
{
    meow(3);

}

void meow(int n)
{
    for (int i= 0; i < n; i++ )
    {
    printf("MEOW \n");
    }

}