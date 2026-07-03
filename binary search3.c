//. Given a sorted array that may contain duplicate values, use Binary Search to find:
//1. The first occurrence of a target value.
//2. The last occurrence of a target value.
//3. The total number of occurrences.

#include <stdio.h>

int firstOccurrence(int arr[], int n, int search) {
    int left = 0, right = n - 1;
    int result = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == search) {
            result = mid;
            right = mid - 1;
        }
        else if(arr[mid] < search) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(int arr[], int n, int search) {
    int left = 0, right = n - 1;
    int result = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == search) {
            result = mid;
            left = mid + 1;
        }
        else if(arr[mid] < search) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }




    int search;

    printf("Enter target: ");
    scanf("%d", &search);

    int first = firstOccurrence(arr, n, search);
    int last = lastOccurrence(arr, n, search);

    if(first == -1) {
        printf("Element not found\n");
    }
    else {
        printf("First Occurrence: %d\n", first);
        printf("Last Occurrence: %d\n", last);
        printf("Total Occurrences: %d\n", last - first + 1);
    }

    return 0;
}


