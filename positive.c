#include<stdio.h>
#include"cs50.h"

// gcc -o hello hello.c cs50.c

int get_positve_int(void);

int main(void) 
{
    int i = get_positve_int();
    printf("%i \n", i);
}

int get_positve_int(void) {
    int n;
    do {
       n = get_int("Positive Integer: ");
    }
    while (n < 1);
    return n;
}