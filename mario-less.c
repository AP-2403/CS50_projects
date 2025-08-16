#include <cs50.h>
#include <stdio.h>
int n;
int main(void)
{
    // Prompt user for positive integer
    do
    {
        n = get_int("Heights: ");
    }
    while (n < 1 || n > 8);
    for (int x = 0; x < n; x++)
    {
        for (int y = n; y > 0; y--)
        {
            if (y > x + 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
