//takes an array of integers as input and traverses the
//array only once. Using the concept of Linear Search (sequential traversal),
//find the maximum and minimum elements in the array.

#include <stdio.h>

int max, min;

void max_min(int arr[], int n, int index)
{
    if(index == n)
        return;

    if(arr[index] > max)
        max = arr[index];

    if(arr[index] < min)
        min = arr[index];

    max_min(arr, n, index + 1);
}
int main()
{
    int i, n;
    printf("Array Size : ");
    scanf("%d",&n);
    printf("Elements : ");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    max_min(arr,n,1);

    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
}

