//performs Binary Search on a sorted array.
//In addition to finding the target element, count and display how many comparisons were required to find the element.


#include <stdio.h>

int count = 0;

int rSearch(int arr[], int left, int right, int key)
{
    if (left > right)
    {
        return -1;
    }



    int mid = (left + right) / 2;
    count++;
    if (arr[mid] == key)
    {
        return mid;
    }
    count++;
    if (arr[mid] < key)
    {
        return rSearch(arr, mid + 1, right, key);
    }

    return rSearch(arr, left, mid - 1, key);
}

int main()
{
    int n, key;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &key);

    int result = rSearch(arr, 0, n - 1, key);

    if (result != -1)
    {
        printf("\nElement found at index: %d\n", result);
    }
    else
    {
        printf("\nElement not found\n");
    }

    printf("Number of comparisons: %d\n", count);

    return 0;
}
