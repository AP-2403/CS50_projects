#include <cs50.h>
#include <stdio.h>

int change, quarter, dime, cent, penny;

int main(void)
{
    do
    {
        change = get_int("Change owed:  ");
    }
    while (change < 0);
    quarter = 0;
    dime = 0;
    cent = 0;
    penny = 0;

    while (change >= 25)
    {
        change = change - 25;
        quarter++;
    }
    while (change >= 10)
    {
        change = change - 10;
        dime++;
    }
    while (change >= 5)
    {
        change = change - 5;
        cent++;
    }
    while (change >= 1)
    {
        change = change - 1;
        penny++;
    }
    printf("Sum: %d", quarter + dime + cent + penny);
}
