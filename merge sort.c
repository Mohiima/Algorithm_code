#include <stdio.h>
void merge(int arr[], int l, int mid, int h)
{
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int L[n1], H[n2];
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        H[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2)
    {
        if(L[i] >= H[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = H[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = H[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int h)
{
    if(l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}
int main()
{
    int n, i;
    printf("Enter the number of orders: ");
    scanf("%d", &n);
    int order[n];
    printf("Enter the order values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &order[i]);
    mergeSort(order, 0, n - 1);
    printf("\nSorted Order Values (Descending):\n");
    for(i = 0; i < n; i++)
        printf("%d ", order[i]);
    printf("\n\nTop 3 Highest Order Values:\n");
    for(i = 0; i < 3 && i < n; i++)
        printf("%d ", order[i]);
    return 0;
}
