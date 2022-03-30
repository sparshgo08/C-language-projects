// TITLE: NUMBER GUESSING GAME

/* In this game, the system will first generate a random number (say) "n". it will then ask the user to guess the number. if the user guesses
a number higher than n the system will print "go lower", and if the user guesses a number lower than n, the system will print "go higher"
. if the user guesses the number correct, the system will print "correct!!" followed by the number of guesses it took user to reach the
conclusion*/

// including required header fies
# include <stdio.h>         
# include <stdlib.h>
# include <time.h>

int main() {

    int num, guess, nguess=1;
    srand(time(0));                                                        //to give a new seed to the random generated
    num = rand()%100 + 1;                                                  //genrating the random between 1 and 100
    printf("the number generated randomely is: %d\n", num);                //printing the random number

    do                                                                     //creating a do while loop to keep checking until the number is guessed correctly
    {
        printf("guess a number between 1 and 100: ");                      //taking the first guess
        scanf("%d", &guess);
        if (guess<num)                                                     //checking if the guess is higher or lower or equal to num
        {
            printf("you have to go higher\n");
        }
        else if(guess>num)
        {
            printf("you have to go lower\n");
        }
        else if (guess == num)
        {
            printf("you guessed the number correctly!\n");
            if (nguess==1)
            {
                printf("YOU GUESSED THE NUMBER IN FIRST ATTEMPT!!");       //telling the player how many guesses it took him to reach this conclusion
            }
            else
            {
                printf("it took you %d guesses", nguess);                  //telling the player how many guesses it took him to reach this conclusion
            }
            
        }
        nguess++;                                                          //increament nguess variable after each attempt to keep a count of number of guesses
        
    } while (guess!=num);                                                  //while condition to keep the loop running
    
    return 0;
}