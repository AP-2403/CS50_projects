#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool char_digits(string arg);

int main(int argc, string argv[])
{
    if (argc == 2 && char_digits(argv[1]) == true)
    {

        int k = atoi(argv[1]);
        k = k % 26;
        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, len = strlen(s); i < len; i++)
        {
            if (isalpha(s[i]))
            {
                if (islower(s[i]))
                {
                    printf("%c", ((s[i] - 'a' + k) % 26) + 'a');
                }
                else if (isupper(s[i]))
                {
                    printf("%c", ((s[i] - 'A' + k) % 26) + 'A');
                }
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
bool char_digits(string arg)
{
    for (int x = 0, lens = strlen(arg); x < lens; x++)
    {
        if (isdigit(arg[x]))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
