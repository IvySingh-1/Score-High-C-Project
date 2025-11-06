// including user-defined file "Exams.c"
#include "Exams.c"

#include <stdio.h>

// time.h header file contains definitions of functions to get and manipulate date and time information
#include <time.h>

// declaration of function for choice of exam
void introMenu();

void exams(int examChoice);

int main()
{
    introMenu();
    return 0;
}

// function for choice of exam
void introMenu()
{
    // greeting user
    printf("\n\n\t\tSCORE HIGH");
    printf("\nWelcome to the new way to practice & learn!");

    // input user's name
    char name[50];
    printf("\nWhat's your good name?\nName: ");
    fgets(name, sizeof(name), stdin);

    // input choice of exam from user
    int examChoice;

    // label for choice of exams to handle incorrect input
exam_choice:

    // display exam choices
    printf("\n\nWhich exam are you preparing for? \nSelect the appropriate number: \n1 JEE Main \n2 NEET (UG) \nYour choice: ");

    // input user's exam choice
    scanf("%d", &examChoice);

    switch (examChoice)
    {
    case 1:
        // choice = JEE Mains
        printf("\nStart preparing from now! \nGood luck for your JEE Main prepration, %s", name);

        // control flowing to file 'Exams.c'
        exams(examChoice);

        break;
    case 2:
        // choice = NEET-UG
        printf("\nStart preparing from now! \nGood luck for your NEET (UG) prepration, %s", name);

        // control flowing to file 'Exams.c'
        exams(examChoice);
        break;
    default:
        printf("\nINVALID CHOICE! Select an appropriate choice.");

        // display choice of exams again
        goto exam_choice;
    }
}
