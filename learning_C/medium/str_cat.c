#include <stdio.h>

void strcatenation(const char str1[], const char str2[], char result[])
{
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1++;
        result[i] = str1[i];
    }
    for (int j = 0; str2[j] != '\0'; j++)
    {
        result[count1 + j] = str2[j];
        count2++;
    }
    result[count1 + count2] = '\0';

    printf("%s", result);
}

int main()
{
    char string[100];
    strcatenation("Word", "Play", string);
}