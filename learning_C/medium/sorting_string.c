#include <stdio.h>
#include <string.h>

void sorting_string(char user_string[])
{
    char least = '~';
    int store;
    char sorted_string[strlen(user_string) + 1];
    sorted_string[strlen(user_string)] = '\0';
    for (int i = 0; i < strlen(user_string); i++)
    {
        for (int j = 0; j < strlen(user_string); j++)
        {

            if (user_string[j] < least)
            {
                least = user_string[j];
                store = j;
            }
        }
        sorted_string[i] = least;
        user_string[store] = '~';
        least = '~';
    }

    printf("%s", sorted_string);
}

int main(void)
{
    char words[] = "ballers";
    sorting_string(words);
    return 0;
}
