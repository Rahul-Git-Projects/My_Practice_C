#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    enum Company tier_1,tier_2,tier_3;
    tier_1 = GOOGLE;
    tier_2 = EBAY;
    tier_3 = XEROX;
    printf("%d\n%d\n%d",tier_3,tier_1,tier_2);
    return 0;
}