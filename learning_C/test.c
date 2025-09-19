#include <stdio.h>

int main()
{
        
        int array1[10] = {0};
        for (int i = 0; i < 10; i++)
        {
                printf("%d\t", array1[i]);
        }
        printf("\n %d", sizeof(array1));
}