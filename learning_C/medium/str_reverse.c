#include <stdio.h>
#include <string.h>

void reverse_string(char user_string[])
{
    char reverse_string[strlen(user_string) + 1];

    for (int i = strlen(user_string) - 1, j = 0; i >= 0; i--, j++)
    {
        reverse_string[j] = user_string[i];
    }

    printf("%s", reverse_string);
}

int main(void)
{

    reverse_string("Goat");
    return 0;
}