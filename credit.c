#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n = get_long(" Number : ");
    // count digits
    long cc= n;
    int i = 0;
    while ( cc > 0)
    {
        cc=cc/10;
        i++;
    }
    // Checking validity
    if (i != 13 && i != 15 && i != 16 )
    {
        printf("INVALID\n");
        return 0;
    }
    else if ( i == 15 )
    {
        printf("AMEX\n");
    }
    else if ( i = 13 )
    {
        printf("VISA\n");
    }
    else if ( i == 16 );
    {
        while ( n > 0){
            int digit = n % 10;
            n = n/10;
        }
        printf("Digits : %d", digit);
    }

    printf("Digits , %d\n", i);


}
