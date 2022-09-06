#include <cs50.h>
#include <stdio.h> //header files. standard input and output (io) library

int main (void)
{
    char c = get_char("Do you agree? ");

    if (c < 'y' || c == 'Y')
    {
        printf("Agreed. y\n");
    }
    else if (c < 'n' || c == 'N')
    {
        printf("Not agreed. y\n");
    }
}
