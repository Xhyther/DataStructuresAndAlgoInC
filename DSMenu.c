//Vhon Michael V. Tabalan
//BSCS 2A

#include <stdio.h>
#include <string.h>
#define MaxLength 1000

//Was designed to fit the standard size of a terminal
// 80 x 24
//font size of terminal is 10 - 11


//For Printing text in the Center of the Termnial
void printCentered(const char* text) {
    int standardConsolewidth = 80;
    // Adjust this to match your console width
    int textLength = strlen(text);
    int padding = (standardConsolewidth - textLength) / 2;

    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    printf("%s", text);
}


//Integr Array to String so that I print it in center using the printCentered function
void arrayToString(int arr[], int size, char *result) {
    // Start with an empty string
    result[0] = '\0';

    char buffer[20]; // Temporary buffer to hold each formatted element
    for (int i = 0; i < size; i++) {
        // Format the current integer with brackets
        sprintf(buffer, "[ %d ]", arr[i]);

        // Append to the result string
        strcat(result, buffer);
    }
}

//Note to Self:
// The 2 above function can be replace anytime with manually adjusting the code
// So that the functionality can be done.


//Note to All!!!
//The Quit in every part of this program has not been implemented yet
//This means that choosing Quit will exit the prgram and not go to the previous screem
//Will figure it out soon

//Also, functionalities not finish yet will print "Functionality not available: Code is still being written for this operation."

void PrintWelcome()
{
    printf("\n\n\n\n\n");
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

        
}

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        else
            // If target is smaller, ignore the right half
            right = mid - 1;
    }

    return -1; // Target not found
}


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {

    int PressAnyKey;
    int DSAOption;
    int LSDOption;
    int SizeOfArray;
    char StringInt[100];
    int ArrayOperationOption;
    int SeachTarget;
    char Exit;
    
    while (1)
    {
        
        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
        PrintWelcome();
        printCentered("");
        if (scanf("%c", &PressAnyKey) != EOF )
        {
            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
            do{
                
                printf("\n\n\n\n\n");
                printCentered("Data Structures and Algorithms: \n\n\n");
                printf("\t\t\t[1] Linear Data Structures\n");
                printf("\t\t\t[2] Non - Linear Data Structures\n");
                printf("\t\t\t[3] Strings\n");
                printf("\t\t\t[4] Sorting Algorithms\n");
                printf("\t\t\t[5] Seaching Algorithms\n");
                printf("\t\t\t[6] Quit\n");

                printf("\n\n\t\t\tChoose an Option: ");
                scanf("%d" , &DSAOption);

                switch (DSAOption){
                case 1:
                printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                do
                {
                    printf("\n\n\n\n\n");
                    printCentered("Linear Data Structures: \n\n\n");
                    printf("\t\t\t   [1] Arrays\n");
                    printf("\t\t\t   [2] Linked Lists\n");
                    printf("\t\t\t   [3] Stacks\n");
                    printf("\t\t\t   [4] Queues\n");
                    printf("\t\t\t   [5] Quit\n");
                    printf("\n\n\t\t\t   Choose an Option: ");
                    scanf("%d" , &LSDOption);
                    
                  
                    switch (LSDOption) 
                    {
                        case 1:
                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                            printf("\n\n\n\n\n");
                            printCentered("=========================================================\n");
                            printf("\n");
                            printCentered("Welcome to Arrays Menu!\n");
                            printf("\n");
                            printCentered("=========================================================\n");
                            printf("\n");
                            printCentered("Enter size of the Array: ");
                            scanf("%d", &SizeOfArray);


                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                            printf("\n\n\n\n\n");
                            int Array[MaxLength];
                            for (int i = 0; i < SizeOfArray; i++)
                            {
                                if( i >= 1)
                                {
                                    printCentered("Previouse element: ");
                                    printf("%d\n", Array[i - 1]);
                                }
                                printf("\n\n");
                                printCentered("Index [");
                                printf("%d]\n", i);
                                printCentered("Enter Array element: ");
                                scanf("%d", &Array[i]);
                                printf("\e[1;1H\e[2J"); //Regex to Clear the screen

                                if(i != SizeOfArray - 1)
                                    printf("\n\n\n\n\n");
                                else
                                    printf("\n\n\n\n\n");


                            }

                        do
                        {
                         
                            while(1)
                            {
                                printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                 printf("\n\n\n\n\n");
                                printCentered("=========================================================\n");
                                printf("\n");
                                printCentered("Welcome to Arrays Menu!\n");
                                printf("\n");
                                printCentered("=========================================================\n");
                                
                                printf("\t   Size of the Array: %d\n\n", SizeOfArray);
                            

                                //Operations for Arrays Here 
                                printCentered("Array Operations:\n\n");
                                printf("\t\t\t\t[1] Traverse\n");
                                printf("\t\t\t\t[2] Insert\n");
                                printf("\t\t\t\t[3] Delete\n");
                                printf("\t\t\t\t[4] Search\n");
                                printf("\t\t\t\t[5] Sort\n");
                                printf("\t\t\t\t[6] Merge\n\n\n");
                                printCentered("Choose an Option: ");
                                scanf("%d", &ArrayOperationOption);

                                switch (ArrayOperationOption)
                                {
                                    case 1:
                                    //Will probably edit this to show the index of each element and have some rest betweeb each element to show "traversal"
                                    
                                        
                                       printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                        printf("\n\n\n\n\n");
                                        printCentered("Array:\n\n");
                                        arrayToString(Array, SizeOfArray, StringInt);
                                        printCentered(StringInt);
                                        printf("\n\n");

                                        do
                                        {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                            
                                        }while (Exit != 'E');
                                    
                                    
                                        break;
                                    case 2:
                                        //Insert
                                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                        printf("\n\n\n\n\n");
                                    if (SizeOfArray >= MaxLength) {
                                            printCentered("Cannot insert: Array is full.\n\n");
                                        } else {
                                            int insertValue, insertIndex;

                                            // Get the value to insert
                                            printf("\t\t\tEnter the value to insert: ");
                                            scanf("%d", &insertValue);

                                            // Get the index to insert at
                                            printf("\t\t\tEnter the index (0 to %d): ", SizeOfArray);
                                            scanf("%d", &insertIndex);

                                            // Validate index
                                            if (insertIndex < 0 || insertIndex > SizeOfArray) {
                                                printCentered("Invalid index. Operation canceled.\n\n");
                                            } else {
                                                // Shift elements to the right
                                                for (int i = SizeOfArray; i > insertIndex; i--) {
                                                    Array[i] = Array[i - 1];
                                                }

                                                // Insert the new value
                                                Array[insertIndex] = insertValue;
                                                SizeOfArray++; // Increment the array size

                                                printCentered("Value inserted successfully!\n\n");

                                                // Print the updated array
                                                printCentered("Updated Array:\n\n");
                                                arrayToString(Array, SizeOfArray, StringInt);
                                                printCentered(StringInt);
                                                printf("\n\n");
                                            }

                                        }

                                         do
                                        {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                            
                                        }while (Exit != 'E');
                                        break;

                                    case 3:
                                        printf("\e[1;1H\e[2J"); // Clear the screen
                                        printf("\n\n\n\n\n");
                                        printCentered("Delete Operation (Array)\n\n");
                                        printCentered("Array:\n\n");
                                        arrayToString(Array, SizeOfArray, StringInt);
                                        printCentered(StringInt);
                                        printf("\n\n");

                                        if (SizeOfArray == 0) 
                                        {
                                            printCentered("Cannot delete: Array is empty.\n\n");
                                        } 
                                        else 
                                        {
                                            int deleteIndex;

                                            // Get the index to delete
                                            printf("\t\t     Enter the index to delete (0 to %d): ", SizeOfArray - 1);
                                            scanf("%d", &deleteIndex);
                                            printf("\n");
                                            // Validate index
                                            if (deleteIndex < 0 || deleteIndex >= SizeOfArray) 
                                            {
                                                printCentered("Invalid index. Operation canceled.\n\n");
                                            } 
                                            else 
                                            {
                                                // Shift elements to the left
                                                for (int i = deleteIndex; i < SizeOfArray - 1; i++) 
                                                {
                                                    Array[i] = Array[i + 1];
                                                }

                                                SizeOfArray--; // Decrement the size
                                                printCentered("Value deleted successfully!\n\n");

                                                // Print the updated array
                                                printCentered("Updated Array:\n\n");
                                                arrayToString(Array, SizeOfArray, StringInt);
                                                printCentered(StringInt);
                                                printf("\n\n");
                                            }
                                        }

                                         do
                                        {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                            
                                        }while (Exit != 'E');
                                        break;
                                    case 4:
                                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                        printf("\n\n\n\n\n");
                                        printCentered("Searching (Array)\n");
                                        printf("\n\t\t         Enter the number to search: ");
                                        scanf("%d", &SeachTarget);
                                        printf("\n");

                                        int result = binarySearch(Array, SizeOfArray, SeachTarget);

                                        
                                        if (result != -1)
                                            printf("\t\t\t    Number %d found at index %d.\n\n", SeachTarget, result);
                                        else
                                            printf("\t\t\t    Number %d not found in the array.\n\n", SeachTarget);


                                         do
                                        {
                                            printf("\t\t\t      Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                            
                                        }while (Exit != 'E');
                                        break;
                                    case 5: 
                                        //Will Implement A choice to sort ascending or descending
                                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                    printf("\n\n\n\n\n");
                                        printCentered("Sorting (Array)\n");
                                        insertionSort(Array, SizeOfArray);
                                        printCentered("Array:\n\n");
                                        arrayToString(Array, SizeOfArray, StringInt);
                                        printCentered(StringInt);
                                        printf("\n\n");
                                         do
                                        {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                            
                                        }while (Exit != 'E');
                                        break;

                                    case 6:
                                        printCentered("Functionality not available: Code is still being written for this operation. \n\n");

                                        break;
                                        
                                    
                                    default:
                                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                        printf("Note: Invalid Option Choose Again!!");
                                        printf("\n\n\n\n\n");
                                        break;
                                }
                            }

                        } while (!(ArrayOperationOption >= 1 && ArrayOperationOption <= 6));
                

                            break;
                        case 2:
                            printf("Linked List Menu\n");
                            printCentered("Functionality not available: Code is still being written for this operation. \n\n");
                            break;
                        case 3:
                            printf("Stacks Menu\n");
                            printCentered("Functionality not available: Code is still being written for this operation. \n\n");
                            break;
                        case 4:
                            printf("Queues Menu\n");
                            printCentered("Functionality not available: Code is still being written for this operation. \n\n");
                            break;
                        case 5: 
                            break;
                        default:
                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                            printf("Note: Invalid Option Choose Again!!");
                    }
                }while(!(LSDOption  >= 1 && LSDOption <= 5));


                    break;
                case 2:
                    printf("Case for NLDS\n");
                    printCentered("Functionality not available: Code is still being written for this operation. \n\n");
                    break;
                case 3:
                    printf("Case for Strings\n");printCentered("Functionality not available: Code is still being written for this operation. \n\n");

                    break;
                case 4:
                    printf("Case for Sorting\n");
                    printCentered("Functionality not available: Code is still being written for this operation. \n\n");
                    break;
                case 5:
                    printf("Case for Searching\n");
                    printCentered("Functionality not available: Code is still being written for this operation. \n\n");
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
