#include<stdio.h>
#include"cs50.h"

// gcc -o hello hello.c cs50.c

int main(void) 
{
  int x = get_int("x :  ");
  int y = get_int("y :  ");
  // printf("%i\n", (float) x + (float)y);
  if ( x < y) {
    printf("x is less than y\n");
  } else if (x > y) {
    printf("x is greater than y\n");
  } else {
    printf("x is equal to y\n");
  }

}
