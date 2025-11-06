#include <stdio.h>

// time.h header file contains definitions of functions to get and manipulate date and time information
#include <time.h>

// function to calculate 25s reading time for instructions
int stopwatch(void)
{
    int seconds = 25;

    while (seconds > 0)
    {
        int s = seconds % 60;

        // '\r' (Carriage Return), helps in moving the cursor to the beginning of the current line without advancing or jumping to the next line
        //  2 digit display for 25-seconds timer
        printf("\r%02d", s);

        fflush(stdout);

        // clock_t is a time-related datatype representing the date as an integer which is a part of the calendar time
        //  clock() function returns the number of clock ticks elapsed since the program was launched
        //  CLOCKS_PER_SEC macro holds the number of times does the system clock ticks per second
        clock_t stop = clock() + CLOCKS_PER_SEC;

        // time delay
        while (clock() < stop)
        {
        }

        // decrementing 'seconds' with each passing second
        seconds--;
    }

    printf("\rDaily Practice has started now!!\n");

    return 0;
}