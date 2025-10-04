#include <stdio.h>

size_t strlength(const char *string)
{
    size_t length;
    const char *ptr = string;
    while (*string)
    {
        string++;
    }
    length = string - ptr;
    return length;
}

int main(void)
{
    printf("%zu", strlength("Birthday"));
    return 0;
}