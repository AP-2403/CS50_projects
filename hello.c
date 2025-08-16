#include <stdio.h>
#include <cs50.h>
// Asks the name of the user and then prints hello, name
int main(void)
{
    string name = get_string("What is your name ?  ");
    printf("hello, %s\n", name);
}
