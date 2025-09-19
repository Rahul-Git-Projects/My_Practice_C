#include <stdio.h>
#include <stdbool.h>

bool str_compare(const char string1[], const char string2[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    int count1 = 0;
    int count2 = 0;

    while (string1[i] != '\0')
    {
        i++;
        count1++;
    }

    while (string2[j] != '\0')
    {
        j++;
        count2++;
    }

    if (count1 != count2)
    {
        return 0;
    }

    while (string1[k] != '\0')
    {
        if (string1[k] != string2[k])
        {
            return 0;
        }
        k++;
    }
    return 1;
}

int main()
{
    printf("%d", str_compare("Doggy", "Puppy"));
}
