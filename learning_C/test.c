#include <stdio.h>

int main(void)
{
        char string1[] = "Rahul";
        int length = 0;
        for (int i = 0; string1[i] != '\0'; i++)
                length++;
        printf("%d", length);
}