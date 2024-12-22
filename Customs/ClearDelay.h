#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void Clear(int seconds){
    
    printf("Sleeping for %d seconds...\n", seconds);
    sleep(seconds);

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
        printf("Screen cleared after %d seconds!\n", seconds);

    //If error use
    // printf("\e[1;1H\e[2J"); 
    // will most likely not work unless you use the native terminal of your OS

    //Goodluck Allen!

}