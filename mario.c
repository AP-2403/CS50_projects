#include <cs50.h>
#include <stdio.h>

int row, column, height, gap;
int main(void)
{
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    for (row = 0; row < height; row++)
    {
        for (column = height; column > 0; column--)
        {
            if (column > row + 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("  ");
        for (column = 0; column < height; column++)
        {
            if (column < row + 1)
            {
                printf("#");
            }
        }

        printf("\n");
    }
}
