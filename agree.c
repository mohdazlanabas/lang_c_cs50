#include<stdio.h>
#include"cs50.h"

// gcc -o hello hello.c cs50.c

int main(void) 
{

    char c = get_char(" Do you agreee? ");
    if (c == 'y' || 'Y')
    {
        printf("Agreed. \n");
    }   else if (c == 'n' || 'N') {
        printf("No. \n");
    }

    int i = 0;
    while (i < 50)
    {
        printf("While Loop \n");
        i++;
    }

        for ( int j = 0; j < 50; j++ )
    {
        printf("For Loop \n");

    }

}
