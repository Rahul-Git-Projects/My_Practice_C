#include <stdio.h>

struct Structures
{
    int numbers;
    char letters;
};

int main(void)
{
    struct Structures name1;

    name1.numbers = 3;
    name1.letters = 'k';

    return 0;
}
