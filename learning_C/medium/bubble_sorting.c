#include <stdio.h>
#include <string.h>

void bubble_sort(void)
{
    int number_of_strings;
    int string_n = 0;
    printf("Enter the number of strings you want to be sorted: ");
    scanf("%d", &number_of_strings);

    char user_strings[number_of_strings][101];

    while (string_n < number_of_strings)
    {

        printf("String %d: ");
        scanf("%s", user_strings[string_n]);

        string_n++;
    }

    char sorted_strings[number_of_strings][101];

    for (int i = 0; i < number_of_strings; i++)
    {
        if (i < number_of_strings - 1)
        {
            if (strcmp(user_strings[i], user_strings[i + 1]) > 0)
            {
                strncpy(sorted_strings[i + 1], user_strings[i], sizeof(sorted_strings[i]) - 1);
                strncpy(sorted_strings[i], user_strings[i + 1], sizeof(sorted_strings[i] - 1));
            }
        }
        if (i == number_of_strings - 1)
        {
            if (strcmp(user_strings[i], user_strings[0]) < 0)
            {
                strncpy(sorted_strings[i], user_strings[0], sizeof(sorted_strings[i]) - 1);
                strncpy(sorted_strings[0], user_strings[i], sizeof(sorted_strings[0]) - 1);
            }
        }
    }
}