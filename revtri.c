#include <stdio.h>
#define SIZE 5

int main() {

    int space;

    for (int i = 0; i < SIZE; i++)
    {
        for(space = 0; space < SIZE - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < SIZE; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}