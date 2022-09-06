#include <cs50.h>
#include <stdio.h> //header files. standard input and output (io) library

int main (void)
{
    string first = get_string("Whats your first name? ");
    string last = get_string("Whats your second name? ");
    printf("Hello, %s %s!\n", first, last);
}