// including user-defined file "DailyPractice.c"
#include "DailyPractice.c"

// including user-defined file "Stopwatch.c"
#include "Stopwatch.c"

#include <stdio.h>

// declaring function for display of instructions
void instructions();

// function for choice of daily practice paper
void exams(int examChoice)
{
    int dppChoice;

    // label for choice of daily practice paper to handle incorrect input
dpp_choice:
    printf("\n\nSelect appropriate number for Daily Practice paper: \n1) Daily Practice 1 \n2) Daily Practice 2 \n3) Daily Practice 3\nYour choice: ");

    scanf("%d", &dppChoice);

    if (dppChoice >= 1 && dppChoice <= 3)
    {
        // displaying instructions
        instructions();

        // function for instructions' reading time
        // control flowing to file 'Stopwatch.c'
        stopwatch();

        // control flowing to file 'DailyPractice.c'
        dailyPractice(examChoice, dppChoice);
    }
    else
    {
        printf("\nINVALID CHOICE! Select an appropriate choice.");

        // display choice of daily practice paper again
        goto dpp_choice;
    }
}

// function to display instructions for questions
void instructions()
{
    printf("\n\tINSRUCTIONS FOR DAILY PRACTICE");
    printf("\nYou've 25 seconds to read the insructions");
    printf("\nYou've entered Assignment mode");
    printf("\nAssignment mode has no time limit");
    printf("\nThe set contains 15 Questions. \n+1 for each correct answer \n0 for incorrect or no answer");
    printf("\nSolve a question & instantly see the correct option\n");
}
