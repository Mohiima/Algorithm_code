//linear search using Iterative Approach and Recursive Approach.

#include<stdio.h>
int iterativeLinearSearch(int numbers[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(numbers[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int recursiveLinearSearch(int numbers[], int size, int target, int currentIndex)
{

        if(currentIndex >= size)
        {
            return -1;
        }
        else if(numbers[currentIndex]==target)
        {
            return currentIndex;
        }
        else
            return recursiveLinearSearch(numbers,size,target,currentIndex+1);
}

int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);

    int numbers[size],i;
    printf("Enter %d Elements: \n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&numbers[i]);
    }

    int target;
    printf("Enter the number to search: ");
    scanf("%d",&target);

    //iterative approach
    int iterativeResult=iterativeLinearSearch(numbers,size,target);
    if(iterativeResult!=-1)
    {
        printf("Iterative Search: Elements found at index %d\n", iterativeResult);

    }
    else
    {
        printf("Iterative Search: Elements not found ");
    }

    //Recursive Approach
    int recursiveResult=recursiveLinearSearch(numbers,size,target, 0);
     if(recursiveResult!=-1)
    {
        printf("Recursive Search: Elements found at index %d\n", recursiveResult);

    }
    else
    {
        printf("Recursive Search: Elements not found ");
    }
}

