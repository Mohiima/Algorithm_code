//that takes an array and a target value (key) as input.
//Using Linear Search, find all occurrences of the key in the array and
//display their indices. Also, print the total number of occurrences.

#include<stdio.h>

int count = 0;

void occ(int arr[], int n, int index, int key)
{
if(index == n)
return;

 if(arr[index] == key)
{
printf("Found at index %d\n", index);
count++;
}
occ(arr, n, index + 1, key);
}
int main()
{
int i, n, key;
printf("Array Size :");
scanf("%d", &n);

int arr[n];
printf("Elements : ");
for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}
printf("Key : ");
scanf("%d", &key);

occ(arr, n, 0, key);

printf("Total Occurrences = %d\n", count);

return 0;
}
