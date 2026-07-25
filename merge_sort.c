#include <stdio.h>
void merge(int a[], int l, int m, int h)
{
    int i=l, j=m+1, k=0;
    int temp[h-l+1];

    while(i<=m && j<=h)
    {

        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=m)
    {
        temp[k++]=a[i++];
    }
    while(j<=h)
    {
        temp[k++]=a[j++];
    }
    for(i=l,k=0; i<=h; i++,k++)
    {
        a[i]=temp[k];
    }

}
void mergeSort(int a[], int l, int h)
{
    if(l<h)
    {
        int m= (l+h)/2;
        mergeSort(a,l,m);
        mergeSort(a, m+1, h);
        merge(a,l,m,h);
    }
}

int main()
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the elements %d: ",i+1);
        scanf("%d", &a[i]);
    }
    mergeSort(a,0,n-1);
    printf("Sorted Array: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;

}
