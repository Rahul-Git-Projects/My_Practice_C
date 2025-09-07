#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum f {puppy,kitten};
    enum f cute_animal,ugly_animal;
    char boolean_word[100] = "true";
    cute_animal = puppy;
    ugly_animal = kitten;
    bool decision = (cute_animal < ugly_animal);
    if (decision){
        printf("True");
    }


}