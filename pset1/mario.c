#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n = get_size()
    print_grid(int size)
    // Get size of grid
    int n = get:int("Size: ")

    // Print a grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do{
        n = get_int("Size: ")
    }
    while (n < 1)
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#")
        }
        printf("\n")
    }
}