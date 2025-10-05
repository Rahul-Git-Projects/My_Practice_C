#include <stdio.h>
#include <stdlib.h>

size_t string_len(char *s)
{
    char *original_ptr = s;
    size_t length;

    while (*s)
        s++;
    length = s - original_ptr;

    original_ptr;
    return length;
}

int main(void)
{
    char string[] = "Rahul is a good dude(jk)";
    printf("%zu", string_len(string));
    return 0;
}