/* Snake, Water, Gun or Rock, Paper, Scissor is a game that we all have played during school time. we are preparing a C program
capable of playing it with you. your program should be able to print the out after you have chosen snake, water or gun.*/

// including the required header files
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // driver variables
    char computer, user;
    // taking an input from the user
    printf("select your input: \ns = snake\nw = water\ng = gun\n: ");
    scanf("%c", &user);
    // we have to generate a random from the computer and assign an object to that number
    // generating a rand number between 1 and 10
    srand(time(0));
    int num = rand() % 100 + 1;
    if (num <= 33)
    {
        // if number is less than or equal to 3 computer will select s i.e. snake
        computer = 's';
    }
    else if (num > 33 && num <= 66)
    {
        // if number is greater than 3 or less than or equal to 6 computer will select w i.e. water
        computer = 'w';
    }
    else
    {
        // else computer will select g i.e. gun
        computer = 'g';
    }

    // printing the computer's choice after user have selected their choice
    printf("%c\n", computer);

    // statements to select who won
    if (computer == user)
    {
        // if computer and user are same, game is drawn
        printf("Game Draw!\n");
    }
    else
    {
        if (computer == 's' && user == 'w')
        {
            // snake wins over water
            printf("computer won!\n");
        }
        else if (computer == 's' && user == 'g')
            ;
        {
            // gun wins over snake
            printf("user won!\n");
        }
        if (computer == 'w' && user == 's')
        {
            // snake wins over water
            printf("user won!\n");
        }
        else if (computer == 'w' && user == 'g')
        {
            // gun wins over water
            printf("user won!\n");
        }
        if (computer == 'g' && user == 's')
        {
            // gun wins over snake
            printf("computer won!\n");
        }
        else if (computer == 'g' && user == 'w')
        {
            // gun wins over water
            printf("computer won!\n");
        }
    }

    return 0;
}