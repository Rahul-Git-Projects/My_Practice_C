#include <stdio.h>

int array_sum(int arr[],int n)
{
    int sum = 0;
    for (int i = 0;i < n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(void)
{
    char* p = NULL;
    int nums[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",array_sum(nums,10));
    return 0;
    
}