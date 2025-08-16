#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool check_key(string keys);
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (!check_key(argv[1]))
    {
        return 1;
    }

    if (check_key(argv[1]))
    {
        string key = argv[1];
        string p = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int x = 0, len = strlen(p); x < len; x++)
        {
            if (isupper(p[x]))
            {
                printf("%c", toupper(key[p[x] - 'A']));
            }
            else if (islower(p[x]))
            {
                printf("%c", tolower(key[p[x] - 'a']));
            }
            else
            {
                printf("%c", p[x]);
            }
        }
    }
    printf("\n");
    return 0;
}

bool check_key(string keys)
{
    if (strlen(keys) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return false;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(keys[i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return false;
        }
        for (int j = i + 1; j < 26; j++)
        {
            if (keys[i] == keys[j])
            {
                printf("Key must not contain repeated characters. \n");
                return false;
            }
        }
    }
    return true;
}
