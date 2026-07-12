//Home Work:
//Task 1: Student Exam Score Ranking
//A school has collected the final exam scores of several students. The administration wants to rank
//the students from the highest score to the lowest score.
//Task
//Devlop a C program that:
//1. Takes the number of students as input.
//2. Accepts each student's ID and exam score.
//3. Uses the Bubble Sort algorithm to sort the students in descending order based on their scores.
//4. Displays the ranked list after sorting.

#include <stdio.h>

int main()
{
    int id[100], score[100];
    int n, i, j, temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter Student ID and Score:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &id[i], &score[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(score[j] < score[j+1])
            {
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;

                temp = id[j];
                id[j] = id[j+1];
                id[j+1] = temp;
            }
        }
    }

    printf("\nRank\tStudent ID\tScore\n");

    for(i=0; i<n; i++)
    {
        printf("%d\t%d\t\t%d\n", i+1, id[i], score[i]);
    }

    return 0;
}
