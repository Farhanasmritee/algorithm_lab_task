#include<stdio.h>
int main()
{
    int a[]={5,10,-23,20,44,34};
    int searchItem =5;
    int i;
    //runtime complexity:O(N)
    //space complixity:O(1)
    for (i=0;i<=5;i++)
    {
        if(a[i]==searchItem)
        {
            printf("Item found:%d\n",i);
            // best case:found at pos 1
            return 0;
        }
    }
    printf("Not found");
    //worst case
    return 0;
}
