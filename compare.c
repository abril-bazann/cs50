#include <cs50.h>
#include <stdio.h> //header files. standard input and output (io) library

int main (void)
{
    int x = get_int("Whats x? ");
    int y = get_int("Whats y? ");


    if (x < y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is not less than y\n");
    }
}


