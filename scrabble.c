#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
// scores for each letter
int numbers[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int score_counter(string word);
int symbol(string words);
int main(void)
{
    string person1 = get_string("Person 1 ");
    string person2 = get_string("Person 2 ");
    // Convert each letter to uppercase
    for (int i = 0, n = strlen(person1); i < n; i++)
    {
        person1[i] = toupper(person1[i]);
    }
    for (int z = 0, m = strlen(person2); z < m; z++)
    {
        person2[z] = toupper(person2[z]);
    }

    // Calculating and comparing scores
    int score1 = score_counter(person1);
    int score2 = score_counter(person2);
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else if (score1 == score2)
    {
        printf("Tie\n");
    }
}
// Function for counting scores used ASCII
int score_counter(string word)
{
    int score = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            score = score + numbers[word[i] - 'A'];
        }
        else
        {
            score = score + 0;
        }
    }
    return score;
}
