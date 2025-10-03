#include <stdio.h>

int main(void)
{
    int num = 3;
    int * pnum = NULL;

    pnum = &num;
    printf("address: %p",(void*)&pnum);
    printf("\nvalue of the pointer: %p",pnum);
    printf("\nsize of the pointer: %d",(int)sizeof(pnum));
    printf("\nvalue of the address to which the pointer is pointing to:%d",*pnum);

    return 0;

}