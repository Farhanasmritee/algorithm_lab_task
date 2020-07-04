#include<stdio.h>
int main()
{
    int a[]={7,3,5,8,6,9};
    int n=5,i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Accending:");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n");
    return 0;
}
//T(N) is O(n^2)
//Bubble sort is O(N^2)
