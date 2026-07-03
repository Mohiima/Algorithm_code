//Binary search using Iterative Approach and Recursive Approach.

#include<stdio.h>
int iterativeBinarySearch(int numbers[], int size, int target)
{
  int beg=0;
  int end=size-1;
  while(beg<=end)
  {
      int mid= (beg+end)/2;
      if(numbers[mid]==target)
      {
          return mid;
      }
      else if(numbers[mid]<target)
      {
          beg=mid+1;
      }
      else
      {
          end=mid-1;
      }
  }
  return -1;
}
int recursiveBinarySearch(int numbers[], int size, int target, int beg, int end)
{
    if(beg>end)
    {
        return -1;
    }
    int mid = (beg+end)/2;
    if(numbers[mid]==target)
    {
        return mid;
    }
    if(numbers[mid]<target)
    {
        return recursiveBinarySearch(numbers,size,target,mid+1,end);
    }
    if(numbers[mid]>target)
    {
       return recursiveBinarySearch(numbers,size,target,beg,mid-1);
    }
}

int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);

    int numbers[size];
    printf("Enter %d elements in sorted order: \n",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&numbers[i]);
    }
    int target;
    printf("Enter the number to search: \n");
    scanf("%d",&target);

    //Iterative approach
    int iterativeResult = iterativeBinarySearch(numbers,size,target);
    if(iterativeResult!=-1)
    {
        printf("\n Iterative Binary Search \n");
        printf("\n Elements found at index: %d \n",iterativeResult);
    }
    else
    {
        printf("\n Element not found \n");
    }
    //Recursive approach
    int recursiveResult = recursiveBinarySearch(numbers,size,target,0,size-1);
    if(recursiveResult!=-1)
    {
        printf("\n Recursive Binary Search \n");
        printf("\n Elements found at index: %d \n",iterativeResult);
    }
    else
    {
        printf("\n Element not found \n");
    }
}

