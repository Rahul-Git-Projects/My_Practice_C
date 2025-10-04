#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char *string = NULL;
    printf("Enter the number of characters you want to input and to be displayed on the screen: ");
    scanf("%d", &n);

    string = (char *)malloc(n);
    printf("Enter the string that you want to be displayed on the screen within the limit that you provided: ");
    scanf("%s", string);

    printf("%s", string);

    free(string);
    string = NULL;
    return 0;
}