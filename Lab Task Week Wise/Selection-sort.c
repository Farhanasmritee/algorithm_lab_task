#include <stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[],int n)
{
    int i,j,mini;
    for(i=0;i<n-1;i++)
    {
        mini = i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[mini])
            mini = j;
        swap(&arr[mini],&arr[i]);
    }
}
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
    int arr[]={3,15,6,20,19,29};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printf("Sorted Array: \n");
    printArray(arr,n);
    return 0;
}
//best case:O(n^2)
//worest case:O(n^2)
//avrage case:O(n^2)
