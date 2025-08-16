#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // Prompt user for positive integer 
    int n;
    do
    {
        n= get_int("Size: ");
    }
    while ( n < 1 );


    for (int x = 0; x< n ; x++ )
    {

        for (int y = 0; y< n ; y++ )
        {
            printf("#");
        }
        printf("\n");
    }
}
