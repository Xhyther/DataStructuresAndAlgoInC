#include <stdio.h>
#include <string.h>
#include "centertxt.h"


void PrintWelcome()
{
    printf("\n\n\n\n\n\n\n\n\n\n");
        printCentered("__| |_______________________________________________| |__\n");
        printCentered("__   _______________________________________________   __\n");
        printCentered("  | |                                               | |  \n");
        printCentered("  | |                                               | |  \n");
        printCentered("  | |   WELCOME TO DATA STRUCTURES AND ALGORITHMS   | |  \n");
        printCentered("  | |                                               | |  \n");
        printCentered("__| |_______________________________________________| |__\n");
        printCentered("__   _______________________________________________   __\n");
        printCentered("  | |                                               | |  \n");
        printf("\n");
        printCentered("                Press any Key to continue.                 \n");

        printf("\n\n\n\n\n\n\n\n\n\n");
}

int main() {

    int PressAnyKey;
    int DSAOption;
    int LDSOption;
    
    while (1)
    {
        
        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
        PrintWelcome();

        if (scanf("%c", &PressAnyKey) != EOF )
        {
            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
            do{
                
                printf("\n\n\n\n\n\n\n\n\n\n");
                printCentered("Data Structures and Algorithms: \n\n\n");
                printf("\t\t\t\t\t\t\t\t    [1] Linear Data Structures\n");
                printf("\t\t\t\t\t\t\t\t    [2] Non - Linear Data Structures\n");
                printf("\t\t\t\t\t\t\t\t    [3] Strings\n");
                printf("\t\t\t\t\t\t\t\t    [4] Sorting Algorithms\n");
                printf("\t\t\t\t\t\t\t\t    [5] Seaching Algorithms\n");
                printf("\t\t\t\t\t\t\t\t    [6] Quit\n");

                printf("\n\n\t\t\t\t\t\t\t\t    Choose an Option: ");
                scanf("%d" , &DSAOption);

                switch (DSAOption)
                {
                case 1:
                    printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                    printf("\n\n\n\n\n\n\n\n\n\n");
                    printCentered("Linear Data Structures: \n\n\n");
                    printf("\t\t\t\t\t\t\t\t\t    [1] Arrays\n");
                    printf("\t\t\t\t\t\t\t\t\t    [2] Linked Lists\n");
                    printf("\t\t\t\t\t\t\t\t\t    [3] Stacks\n");
                    printf("\t\t\t\t\t\t\t\t\t    [4] Queues\n");
                    printf("\t\t\t\t\t\t\t\t\t    [5] Quit\n");
                    printf("\n\n\t\t\t\t\t\t\t\t\tChoose an Option: ");
                    scanf("%d" , &LDSOption);
                    
                  
                    switch (LSDOption) 
                    {
                     case 1:
                     printf("Arrays Menu\n")
                     break;
                    }


                    break;
                case 2:
                    printf("Case for NLDS\n");
                    break;
                case 3:
                    printf("Case for Strings\n");
                    break;
                case 4:
                    printf("Case for Sorting\n");
                    break;
                case 5:
                    printf("Case for Searching\n");
                    break;
                case 6:
                    break;
                
                default:
                    printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                    printf("Note: Invalid Option Choose Again!!");
                }
                    
            }while( !(DSAOption >= 1 && DSAOption <= 6)  );


            break;
        }

        
    }

    return 0;
}
