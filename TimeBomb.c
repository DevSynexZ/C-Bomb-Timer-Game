#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#else
#include <unistd.h>
#endif

int main()
{
    int timer = 15; // countdown
    char password[20];
    char input[20];

    // Secret password
    strcpy(password, "keyboard");

    srand(time(0));
    printf("Password hint: I have keys but no locks, I have space but no room,\nYou can enter but not go outside. What am I?\n");
    printf("💣 A digital bomb has been activated!\n");
    printf("You have %d seconds to defute it by entering the correct password.\n", timer);
    printf("Enter the correct password to stop the countdown.\n\n");

    // countdown loop

    while (timer > 0)
    {
        printf("Time left: %d seconds\n", timer);

        if (rand() % 2 == 0)
        {
            printf(" Warning: System unstable! Hurry up!\n");
            Beep(1000, 500);
        }

        sleep(1);
        timer--;

        // non blocking attempt:  ask for input every few seconds
        if (timer % 3 == 0)
        {
            printf(">> Enter Passowrd: ");
            scanf("%s", input);

            if (strcmp(input, password) == 0)
            {
                printf(" Bomb defused! You saved the day!\n");
                return 0;
            }
            else
            {
                printf(" Worng password! Try Again,still got hope.\n");
                Beep(800, 400);
            }
        }
    }
    // time ran out
    printf("\n Boom! The bomb exploded. Game Over. \n");
    Beep(500, 800);
    Beep(400, 800);
    Beep(18000, 1200);
    return 0;
}