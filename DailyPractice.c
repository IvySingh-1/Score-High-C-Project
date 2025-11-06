#include <stdio.h>

#include <stdlib.h>

#include <string.h>

// time.h header file contains definitions of functions to get and manipulate date and time information
#include <time.h>

// attaching JEEMains daily practice paper 1
#include "jee_dpp1.c"

// attaching JEEMains daily practice paper 2
#include "jee_dpp2.c"

// attaching JEEMains daily practice paper 3
#include "jee_dpp3.c"

// attaching NEET-UG daily practice paper 1
#include "neet_dpp1.c"

// attaching NEET-UG daily practice paper 2
#include "neet_dpp2.c"

// attaching NEET-UG daily practice paper 3
#include "neet_dpp3.c"

void dailyPractice(int examChoice, int dppChoice);

// max number of questions defined as macro
// macro definition
#define MAX_QUESTIONS 15

// structure to store question details
typedef struct
{
	// to store question
	char question[350];

	// array to store four options associated with each question
	char options[4][100];

	// integer to store correct option
	int correctOption;
} Question;

// function to display question to the user
void displayQuestion(Question q)
{
	printf("%s\n", q.question);

	// display four options associated with each question
	for (int i = 0; i < 4; i++)
	{
		printf("%d. %s\n", i + 1, q.options[i]);
	}
}

// function to check the answer
int checkAnswer(Question q, int userAnswer)
{
	return (userAnswer == q.correctOption);
}

void dailyPractice(int examChoice, int dppChoice)
{
	// random question number generator
	srand(time(NULL));

	// initializing questions, options and the correct answer
	// declaring array-type variable for attribute 'Question'
	Question originalQuestions[MAX_QUESTIONS];

	// displaying JEE Mains Daily Practice papers
	if (examChoice == 1)
	{
		// control flowing to file 'jee_dpp1.c'
		if (dppChoice == 1)
			JEE_dpp1(originalQuestions);

		// control flowing to file 'jee_dpp2.c'
		if (dppChoice == 2)
			JEE_dpp2(originalQuestions);

		// control flowing to file 'jee_dpp3.c'
		if (dppChoice == 3)
			JEE_dpp3(originalQuestions);
	}
	// displaying NEET-UG Daily Practice papers
	else if (examChoice == 2)
	{
		// control flowing to file 'neet_dpp1.c'
		if (dppChoice == 1)
			NEET_dpp1(originalQuestions);

		// control flowing to file 'neet_dpp2.c'
		if (dppChoice == 2)
			NEET_dpp2(originalQuestions);

		// control flowing to file 'neet_dpp3.c'
		if (dppChoice == 3)
			NEET_dpp3(originalQuestions);
	}

	// array of struct data-type
	Question questions[MAX_QUESTIONS];

	// memcpy() function is used to copy a block of memory from one location to another. Unlike other copy functions, the memcpy function copies the specified number of bytes from one memory location to the other memory location regardless of the type of data stored.
	memcpy(questions, originalQuestions,
		   sizeof(originalQuestions));

	int numQuestions = MAX_QUESTIONS;

	int score = 0;

	printf("\n\n\t\tDAILY PRACTICE\n\n");

	for (int i = 0; i < MAX_QUESTIONS; i++)
	{

		// storing random question number
		int randomIndex = rand() % numQuestions;

		// storing random question
		Question currentQuestion = questions[randomIndex];

		// displaying question
		displayQuestion(currentQuestion);

		// input answer from user
		int userAnswer;

		printf("Enter your answer (1-4): ");

		scanf("%d", &userAnswer);

		if (userAnswer >= 1 && userAnswer <= 4)
		{
			if (checkAnswer(currentQuestion,
							userAnswer))
			{
				// message for correct answer
				printf("\nCORRECT!\n");

				score++;
			}
			else
			{
				// message for incorrect answer
				printf("\nINCORRECT! The correct answer is "
					   "(%d) %s\n",
					   currentQuestion.correctOption, currentQuestion.options[currentQuestion.correctOption - 1]);
			}
		}
		else
		{
			printf("\nINVALID CHOICE!! Please enter a number between 1 and 4.\n");
		}

		questions[randomIndex] = questions[numQuestions - 1];

		numQuestions--;

		printf("\n");
	}

	// end of Daily Practice paper
	// displaying user's score
	if (score >= 0 && score <= 5)
	{
		printf("Better luck next time !!!! \nYou've done Daily Practice!"
			   "\nYour Score: %d/%d\n",
			   score, MAX_QUESTIONS);
	}

	else if (score > 5 && score <= 10)
	{
		printf("Good job, can do better !!!! \nYou've done Daily Practice!"
			   "\nYour Score: %d/%d\n",
			   score, MAX_QUESTIONS);
	}

	else
	{
		printf("Congratulations. Keep up the good work !!!! \nYou've done Daily Practice!"
			   "\nYour Score: %d/%d\n",
			   score, MAX_QUESTIONS);
	}
}
