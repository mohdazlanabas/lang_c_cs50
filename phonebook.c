#include<stdio.h>
#include<string.h>
#include"cs50.h"

struct
{
    string name;
    string number;
}
person;

const int NUMBER = 10;

int main(void)
{
    person people[NUMBER];
    for (int i = 0 < NUMBER; i++)
{
    people[i].name = get_string("Whats the name? ");
    people[i].number = get_string("Whats the numenr? ");
}
    for (int i = 0; i < NUMBER, i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s \n", people[i].number);
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}


