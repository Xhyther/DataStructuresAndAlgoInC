//Vhon Michael V. Tabalan
//BSCS 2A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <malloc.h>
#define MaxLength 1000


// Structure to represent the singly linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Structure to represent the doubly linked list
typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode;

//struct for single linked list
typedef struct CNode {
    int data;
    struct CNode* next;
} CNode;

typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

// Defining the Queue structure
typedef struct {
    int items[MaxLength];
    int front;
    int rear;
} Queue;


// Function prototypes for the Sinle linked list
//ampagodddddd :(
void insertAtBeginningSingly(Node** head, int data);
void insertAtEndSingly(Node** head, int data);
void deleteNodeSingly(Node** head, int value);
void traverseSingly(Node* head);
int searchSingly(Node* head, int value);
void reverseSingly(Node** head);


// Function prototypes for the doubly linked list
//ampagodddddd :(

void insertAtBeginningDoubly(DNode** head, int data);
void insertAtEndDoubly(DNode** head, int data);
void deleteNodeDoubly(DNode** head, int value);
void traverseDoubly(DNode* head);
int searchDoubly(DNode* head, int value);
void reverseDoubly(DNode** head);

// Function prototypes for the circular linked list
//ampagodddddd :(
void insertAtBeginningCircular(CNode** head, int data);
void insertAtEndCircular(CNode** head, int data);
void deleteNodeCircular(CNode** head, int value);
void traverseCircular(CNode* head);
int searchCircular(CNode* head, int value);
void reverseCircular(CNode** head);

//Prototype for stack
void push(StackNode** top, int data, int maxSize);
int pop(StackNode** top);
int peek(StackNode* top);
int isEmpty(StackNode* top);
int isFull(StackNode* top, int maxSize);
void displayStack(StackNode* top);



void initializeQueue(Queue* q);
bool isEmptyQ(Queue* q);
bool isFullQ(Queue* q);
void enqueue(Queue* q, int value);
void dequeue(Queue* q);
int peekQ(Queue* q);
void traverseQueue(Queue* q);

// Function to print text in the center of the terminal
void printCentered(const char* text);
void arrayToString(int arr[], int size, char *result);

// Function to convert a char array to a string
void chararrayToString(char arr[], int size, char *result);

// Function to print a welcome message with centered text
void PrintWelcome();

// Function for binary search on a sorted array
void binarySearch(int arr[], int size, int target);
void linearSearch(int arr[], int size, int target);
void linearSearchChar(char arr[], int size, char target);
void binarySearchChar(char arr[], int size, char target);

// Functions to sort an integer array
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int size);
void bubbleSort(int arr[], int n);
void countingSort(int arr[], int n, int maxVal);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void radixSort(int arr[], int n);
void bogoSort(int arr[], int n);
int getMaxValue(int arr[], int size);
int isSorted(int arr[], int n);


void charInsertionSort(char arr[], int n);
void charSelectionSort(char arr[], int size);
void charBubbleSort(char arr[], int size);
void charCountingSort(char arr[], int size);
void charQuickSort(char arr[], int low, int high);
void charRadixSort(char arr[], int size);
void charBogoSort(char arr[], int size);
int charisSorted(char arr[], int size);
int charpartition(char arr[], int low, int high);
char chargetMaxValue(char arr[], int size);



// Function to merge two arrays into a third one
void IntMergeArray(int* arr1, int size1, int* arr2, int size2, int* mergeArray);




int main() {

    int PressAnyKey;
    int DSAOption;
    int LSDOption;
    int SizeOfArray;
    int SizeOfArray2;
    char StringInt[100];
    int ArrayOperationOption;
    int SeachTarget;
    char Exit;
    int StringOperationOption;
    int typeOfArrayOption;
    
    int Array2[SizeOfArray2];
    int mergedArray[SizeOfArray +SizeOfArray2];


    

     // Declare and initialize character array and other variables
    char cArray[MaxLength] = {0}; // Character array
    int charSizeOfArray = 0; // Size of the character array
    char charStringInt[100] = {0}; // Temporary string for displaying array
    char charInsertValue; // Variable for storing the character to insert
    int charInsertIndex; // Index for insertion
    char charDeleteIndex; // Variable for storing the index to delete
    char charSearchTarget; // Character to search
    char charExit; // Exit character for menu navigation

    // Declare and initialize Linked lits related variables
    int ListOption;
    int ListOperation;

    //Vartiables used in Searching
    int searchOption;
    int dataTypeSearch;

    bool exit = false;
    
    
    while (!exit)
    {
        
        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
        PrintWelcome();
        printCentered("");
        if (scanf("%c", &PressAnyKey) != EOF )
        {
            do{
                printf("\e[1;1H\e[2J"); 
                printf("\n\n\n\n\n");
                printCentered("Data Structures and Algorithms: \n\n\n");
                printf("\t\t\t[1] Linear Data Structures\n");
                printf("\t\t\t[2] Non - Linear Data Structures\n");
                printf("\t\t\t[3] Strings\n");
                printf("\t\t\t[4] Sorting Algorithms\n");
                printf("\t\t\t[5] Seaching Algorithms\n");
                printf("\t\t\t[6] Exit\n");

                printf("\n\n\t\t\tChoose an Option: ");
                scanf("%d" , &DSAOption);

                switch (DSAOption){
                case 1:
                do
                {
                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                        printf("\n\n\n\n\n");
                        printCentered("Linear Data Structures: \n\n\n");
                        printf("\t\t\t   [1] Arrays\n");
                        printf("\t\t\t   [2] Linked Lists\n");
                        printf("\t\t\t   [3] Stacks\n");
                        printf("\t\t\t   [4] Queues\n");
                        printf("\t\t\t   [5] Exit\n");
                        printf("\n\n\t\t\t   Choose an Option: ");
                        scanf("%d" , &LSDOption);
                    
                  
                            switch (LSDOption) 
                            {
                                case 1:
                                    
                                    do
                                    {
                                            
                                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                            printf("\n\n\n\n\n");
                                            printCentered("=========================================================\n");
                                            printf("\n");
                                            printCentered("Welcome to Arrays Menu!\n");
                                            printf("\n");
                                            printCentered("=========================================================\n");
                                            printf("\n");

                                            printCentered("Select the type of array:\n");
                                            printf("\t\t\t\t[1] Integers\n");
                                            printf("\t\t\t\t[2] Characters\n");
                                            printf("\t\t\t\t[3] Strings\n");
                                            printf("\t\t\t\t[4] Exit\n");
                                            printCentered("Enter your choice: ");
                                            scanf("%d", &typeOfArrayOption);

                                            printCentered("Enter size of the Array: ");
                                            scanf("%d", &SizeOfArray);

                                            switch (typeOfArrayOption)
                                            {
                                            case 1:
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
                                                printf("\t\t\t\t[6] Merge\n");
                                                printf("\t\t\t\t[7] Exit\n\n\n");
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

                                                        binarySearch(Array, SizeOfArray, SeachTarget);

                                                        
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
                                                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                                        printf("\n\n\n\n\n");

                                                        printCentered("Enter size of the Second Array: ");
                                                        scanf("%d", &SizeOfArray2);

                                                        // Get the elements for Array2
                                                        for (int i = 0; i < SizeOfArray2; i++) {
                                                            if (i >= 1) {
                                                                printCentered("Previous element: ");
                                                                printf("%d\n", Array2[i - 1]);
                                                            }
                                                            printf("\n\n");
                                                            printCentered("Index [");
                                                            printf("%d]\n", i);
                                                            printCentered("Enter Array element: ");
                                                            scanf("%d", &Array2[i]);
                                                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen

                                                            if (i != SizeOfArray2 - 1)
                                                                printf("\n\n\n\n\n");
                                                            else
                                                                printf("\n\n\n\n\n");
                                                        }

                                                        // Merge the arrays
                                                        IntMergeArray(Array, SizeOfArray, Array2, SizeOfArray2, mergedArray);

                                                        // Update the SizeOfArray to reflect the new merged size
                                                        SizeOfArray = SizeOfArray + SizeOfArray2;

                                                        // Copy mergedArray back into Array
                                                        for (int i = 0; i < SizeOfArray; i++) {
                                                            Array[i] = mergedArray[i];
                                                        }

                                                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                                        printf("\n\n\n\n\n");
                                                        
                                                        // Print the merged array (now stored in Array)
                                                        printf("\t\t\t\t");
                                                        for (int i = 0; i < SizeOfArray; i++) {
                                                            printf("%d ", Array[i]);
                                                        }
                                                        printf("\n");

                                                        do {
                                                            printf("\t\t\t      Type E to Exit: ");
                                                            scanf(" %c", &Exit);

                                                        } while (Exit != 'E');
                                                        break;
                                                    
                                                    case 7:
                                                        printf("\e[1;1H\e[2J"); // Clear screen
                                                        printf("\n\n\n\n\n");
                                                        printf("Returning to Array Menu.\n");
                                                        break;

                                                    
                                                    default:
                                                        printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                                        printf("Note: Invalid Option Choose Again!!");
                                                        printf("\n\n\n\n\n");
                                                        break;
                                                        
                                                }

                                                
                                            
                                            } while (ArrayOperationOption =! 7);
                                                
                                        break;
                                    case 2:

                                        printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                        printf("\n\n\n\n\n");
                                        
                                    
                                        // Input elements into the character array
                                        for (charSizeOfArray = 0; charSizeOfArray < SizeOfArray; charSizeOfArray++) {
                                            if (charSizeOfArray >= 1) {
                                                printCentered("Previous element: ");
                                                printf("%c\n", cArray[charSizeOfArray - 1]);
                                            }
                                            printf("\n\n");
                                            printCentered("Index [");
                                            printf("%d]\n", charSizeOfArray);
                                            printCentered("Enter Array element (char): ");
                                            scanf(" %c", &cArray[charSizeOfArray]);  // Note the space before %c to consume any leftover newline
                                            printf("\e[1;1H\e[2J"); // Regex to Clear the screen

                                            if (charSizeOfArray != SizeOfArray - 1)
                                                printf("\n\n\n\n\n");
                                            else
                                                printf("\n\n\n\n\n");
                                        }

                                        do {
                                            while (1) {
                                                printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                                printf("\n\n\n\n\n");
                                                printCentered("=========================================================\n");
                                                printf("\n");
                                                printCentered("Welcome to Arrays Menu!\n");
                                                printf("\n");
                                                printCentered("=========================================================\n");

                                                printf("\t   Size of the Array: %d\n\n", charSizeOfArray);

                                                // Operations for Arrays Here 
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
                                                        // Traverse the character array
                                                        printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                                        printf("\n\n\n\n\n");
                                                        char charString[MaxLength];
                                                        printCentered("Array:\n\n");
                                                        chararrayToString(cArray, charSizeOfArray, charString);
                                                        printCentered(charString);
                                                        printf("\n\n");

                                                        do {
                                                            printf("\t\t\t    Type E to Exit: ");
                                                            scanf(" %c", &charExit);
                                                        } while (charExit != 'E');

                                                        break;
                                                    case 2:
                                                        // Insert
                                                        printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                                        printf("\n\n\n\n\n");
                                                        if (charSizeOfArray >= MaxLength) {
                                                            printCentered("Cannot insert: Array is full.\n\n");
                                                        } else {
                                                            // Get the value to insert
                                                            printf("\t\t\tEnter the character to insert: ");
                                                            scanf(" %c", &charInsertValue);

                                                            // Get the index to insert at
                                                            printf("\t\t\tEnter the index (0 to %d): ", charSizeOfArray);
                                                            scanf("%d", &charInsertIndex);

                                                            // Validate index
                                                            if (charInsertIndex < 0 || charInsertIndex > charSizeOfArray) {
                                                                printCentered("Invalid index. Operation canceled.\n\n");
                                                            } else {
                                                                // Shift elements to the right
                                                                for (int i = charSizeOfArray; i > charInsertIndex; i--) {
                                                                    cArray[i] = cArray[i - 1];
                                                                }

                                                                // Insert the new value
                                                                cArray[charInsertIndex] = charInsertValue;
                                                                charSizeOfArray++; // Increment the array size

                                                                printCentered("Value inserted successfully!\n\n");
                                                            }
                                                        }
                                                        do {
                                                            printf("\t\t\t      Type E to Exit: ");
                                                            scanf(" %c", &Exit);

                                                        } while (Exit != 'E');
                                                        break; // Closing brace for case 2

                                                        
                                                    case 3:
                                                        // Delete
                                                        printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                                        printf("\n\n\n\n\n");
                                                        if (charSizeOfArray == 0) {
                                                            printCentered("Cannot delete: Array is empty.\n\n");
                                                        } else {
                                                            // Get the index to delete from
                                                            printf("\t\t\tEnter the index (0 to %d): ", charSizeOfArray - 1);
                                                            scanf("%d", &charDeleteIndex);

                                                            // Validate index
                                                            if (charDeleteIndex < 0 || charDeleteIndex >= charSizeOfArray) {
                                                                printCentered("Invalid index. Operation canceled.\n\n");
                                                            } else {
                                                                // Shift elements to the left
                                                                for (int i = charDeleteIndex; i < charSizeOfArray - 1; i++) {
                                                                    cArray[i] = cArray[i + 1];
                                                                }
                                                                charSizeOfArray--; // Decrement the array size

                                                                printCentered("Value deleted successfully!\n\n");
                                                            }
                                                        }
                                                        do {
                                                            printf("\t\t\t      Type E to Exit: ");
                                                            scanf(" %c", &Exit);

                                                        } while (Exit != 'E');
                                                        break; // Closing brace for case 2

                                                        break;
                                                    case 4:
                                                        // Search
                                                        printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                                        printf("\n\n\n\n\n");
                                                        if (charSizeOfArray == 0) {
                                                            printCentered("Cannot search: Array is empty.\n\n");
                                                        } else {
                                                            // Get the character to search for
                                                            printf("\t\t\tEnter the character to search: ");
                                                            scanf(" %c", &charSearchTarget);
                                                            int found = 0;

                                                            for (int i = 0; i < charSizeOfArray; i++) {
                                                                if (cArray[i] == charSearchTarget) {
                                                                    printf("\t\t\tCharacter '%c' found at index %d.\n", charSearchTarget, i);
                                                                    found = 1;
                                                                    break;
                                                                }
                                                            }
                                                            if (!found) {
                                                                printCentered("Character not found in the array.\n\n");
                                                            }
                                                        }
                                                        do {
                                                            printf("\t\t\t      Type E to Exit: ");
                                                            scanf(" %c", &Exit);

                                                        } while (Exit != 'E');
                                                        break; // Closing brace for case 2

                                                        break;
                                                    case 5:
                                                        // Sort
                                                        printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                                        printf("\n\n\n\n\n");
                                                        if (charSizeOfArray < 2) {
                                                            printCentered("Not enough elements to sort.\n\n");
                                                        } else {
                                                            // Simple bubble sort for character array
                                                            for (int i = 0; i < charSizeOfArray - 1; i++) {
                                                                for (int j = 0; j < charSizeOfArray - i - 1; j++) {
                                                                    if (cArray[j] > cArray[j + 1]) {
                                                                        char temp = cArray[j];
                                                                        cArray[j] = cArray[j + 1];
                                                                        cArray[j + 1] = temp;
                                                                    }
                                                                }
                                                            }
                                                            printCentered("Array sorted successfully!\n\n");
                                                        }
                                                        do {
                                                            printf("\t\t\t      Type E to Exit: ");
                                                            scanf(" %c", &Exit);

                                                        } while (Exit != 'E');
                                                        break; // Closing brace for case 2

                                                        break;
                                                    case 6:
                                                        // Merge (example with another character array)
                                                        printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                                        printf("\n\n\n\n\n");
                                                        char charSecondArray[MaxLength] = {0}; // Second character array
                                                        int charSizeOfSecondArray = 0; // Size of the second array

                                                        // Input elements into the second character array
                                                        printf("\t\t\tEnter size of second array: ");
                                                        scanf("%d", &charSizeOfSecondArray);
                                                        for (int i = 0; i < charSizeOfSecondArray; i++) {
                                                            printf("\t\t\tEnter character for second array at index [%d]: ", i);
                                                            scanf(" %c", &charSecondArray[i]);
                                                        }

                                                        // Merge the two arrays
                                                        for (int i = 0; i < charSizeOfSecondArray; i++) {
                                                            if (charSizeOfArray < MaxLength) {
                                                                cArray[charSizeOfArray++] = charSecondArray[i];
                                                            } else {
                                                                printCentered("Cannot merge: Array is full.\n\n");
                                                                break;
                                                            }
                                                        }
                                                        printCentered("Arrays merged successfully!\n\n");
                                                        do {
                                                            printf("\t\t\t      Type E to Exit: ");
                                                            scanf(" %c", &Exit);

                                                        } while (Exit != 'E');
                                                        break; // Closing brace for case 2

                                                        break;
                                                    default:
                                                        printCentered("Invalid option. Please try again.\n\n");
                                                        do {
                                                            printf("\t\t\t      Type E to Exit: ");
                                                            scanf(" %c", &Exit);

                                                        } while (Exit != 'E');
                                                        break; // Closing brace for case 2

                                                        break;
                                                }
                                            }
                                        } while (1); 
                                        break;
                                    case 3:
                                    printCentered("Functionality not available: Code is still being written for this operation. \n\n");
                                        do
                                        {
                                        printf("\t\t\t      Type E to Exit: ");
                                        scanf(" %c", &Exit);
                                                
                                        }while (Exit != 'E');
                                        
                                        break;
                                    
                                    case 4:
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("Returning to LDS Menu.\n");
                                        break;
                                    
                                    default:
                                        break;
                                    }

                                }while(typeOfArrayOption != 4);

                                break;
        
                       case 2:
                            do {
                                // Clear screen and display the main menu
                                printf("\e[1;1H\e[2J"); // Clear screen
                                printf("\n\n\n\n\n");
                                printCentered("=========================================================\n");
                                printf("\n");
                                printCentered("Welcome to the Linked list Menu!\n");
                                printf("\n");
                                printCentered("=========================================================\n");
                                printf("\n");

                                printCentered("Select the type of Linked list:\n\n");
                                printf("\t\t\t   [1] Singly Linked List\n");
                                printf("\t\t\t   [2] Doubly Linked List\n");
                                printf("\t\t\t   [3] Circular Linked List\n");
                                printf("\t\t\t   [4] Exit\n\n");

                                printCentered("Enter your choice: ");
                                scanf("%d", &ListOption);

                                switch (ListOption) {
                                    case 1: {  // Singly Linked List
                                    Node *head = NULL;
                                    do {
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        printCentered("Singly Linked List Operations:\n\n");
                                        printf("\t\t\t  [1] Insert at Beginning\n");
                                        printf("\t\t\t  [2] Insert at End\n");
                                        printf("\t\t\t  [3] Delete a Node\n");
                                        printf("\t\t\t  [4] Traverse\n");
                                        printf("\t\t\t  [5] Search for a Node\n");
                                        printf("\t\t\t  [6] Reverse the List\n");
                                        printf("\t\t\t  [7] Exit\n\n");
                                        printCentered("Enter your choice: ");
                                        scanf("%d", &ListOperation);

                                        int value, searchValue;
                                        switch (ListOperation) {
                                            case 1:
                                                printf("\e[1;1H\e[2J"); // Clear screen
                                                printf("\n\n\n\n\n");
                                                printCentered(" Enter value to insert at the beginning: ");
                                                scanf("%d", &value);
                                                insertAtBeginningSingly(&head, value);
                                                break;
                                            case 2:
                                                printf("\e[1;1H\e[2J"); // Clear screen
                                                printf("\n\n\n\n\n");
                                                printCentered(" Enter value to insert at the end: ");
                                                scanf("%d", &value);
                                                insertAtEndSingly(&head, value);
                                                break;
                                            case 3:
                                                printf("\e[1;1H\e[2J"); // Clear screen
                                                printf("\n\n\n\n\n");
                                                printCentered(" Enter value to delete: ");
                                                scanf("%d", &value);
                                                deleteNodeSingly(&head, value);
                                                break;
                                            case 4:
                                                printf("\e[1;1H\e[2J"); // Clear screen
                                                printf("\n\n\n\n\n");
                                                printCentered("Traversing Singly Linked List:\n");
                                                traverseSingly(head);

                                                do {
                                                    printf("\t\t\t     Type E to Exit: ");
                                                    scanf(" %c", &Exit);
                                                } while (Exit != 'E');
                                                break;
                                            case 5:
                                                printf("\e[1;1H\e[2J"); // Clear screen
                                                printf("\n\n\n\n\n");
                                                printCentered(" Enter value to search: ");
                                                scanf("%d", &searchValue);
                                                if (searchSingly(head, searchValue)) {
                                                    printCentered("Value found in the list!\n");
                                                } else {
                                                    printCentered("Value not found in the list.\n");
                                                }
                                                do {
                                                    printf("\t\t\t     Type E to Exit: ");
                                                    scanf(" %c", &Exit);
                                                } while (Exit != 'E');
                                                break;
                                            case 6:
                                                printf("\e[1;1H\e[2J"); // Clear screen
                                                printf("\n\n\n\n\n");
                                                printCentered("Reversing Singly Linked List...\n");
                                                reverseSingly(&head);
                                                printCentered("List reversed successfully!\n");

                                                do {
                                                    printf("\t\t\t     Type E to Exit: ");
                                                    scanf(" %c", &Exit);
                                                } while (Exit != 'E');
                                                break;
                                            case 7:
                                                printf("\e[1;1H\e[2J"); // Clear screen
                                                printf("\n\n\n\n\n");
                                                printf("Returning to Linked List Menu.\n");
                                                break;
                                            default:
                                                printf("Invalid choice!\n");
                                        }
                                    } while (ListOperation != 7);
                                }
                                break;


                                    case 2: {  // Doubly Linked List
                                        DNode *head = NULL; // Doubly linked list head
                                        do {
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            printCentered("Doubly Linked List Operations:\n\n");
                                            printf("\t\t\t  [1] Insert at Beginning\n");
                                            printf("\t\t\t  [2] Insert at End\n");
                                            printf("\t\t\t  [3] Delete a Node\n");
                                            printf("\t\t\t  [4] Traverse\n");
                                            printf("\t\t\t  [5] Search for a Node\n");
                                            printf("\t\t\t  [6] Reverse the List\n");
                                            printf("\t\t\t  [7] Exit\n\n");
                                            printCentered("Enter your choice: ");
                                            scanf("%d", &ListOperation);

                                            int value, searchValue;
                                            switch (ListOperation) {
                                                case 1:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to insert at the beginning: ");
                                                    scanf("%d", &value);
                                                    insertAtBeginningDoubly(&head, value);
                                                    break;
                                                case 2:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to insert at the end: ");
                                                    scanf("%d", &value);
                                                    insertAtEndDoubly(&head, value);
                                                    break;
                                                case 3:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to delete: ");
                                                    scanf("%d", &value);
                                                    deleteNodeDoubly(&head, value);
                                                    break;
                                                case 4:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered("Traversing Doubly Linked List:\n");
                                                    traverseDoubly(head);

                                                    do {
                                                        printf("\t\t\t     Type E to Exit: ");
                                                        scanf(" %c", &Exit);
                                                    } while (Exit != 'E');
                                                    break;
                                                case 5:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to search: ");
                                                    scanf("%d", &searchValue);
                                                    if (searchDoubly(head, searchValue)) {
                                                        printCentered("Value found in the list!\n");
                                                    } else {
                                                        printCentered("Value not found in the list.\n");
                                                    }
                                                    do {
                                                        printf("\t\t\t     Type E to Exit: ");
                                                        scanf(" %c", &Exit);
                                                    } while (Exit != 'E');
                                                    break;
                                                case 6:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered("Reversing Doubly Linked List...\n");
                                                    reverseDoubly(&head);
                                                    printCentered("List reversed successfully!\n");

                                                    do {
                                                        printf("\t\t\t     Type E to Exit: ");
                                                        scanf(" %c", &Exit);
                                                    } while (Exit != 'E');
                                                    break;
                                                case 7:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printf("Returning to Linked List Menu.\n");
                                                    break;
                                                default:
                                                    printf("Invalid choice!\n");
                                            }
                                        } while (ListOperation != 7);
                                    }
                                    break;

                                    case 3: {  // Circular Linked List
                                        CNode *head = NULL; // Circular linked list head
                                        do {
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            printCentered("Circular Linked List Operations:\n\n");
                                            printf("\t\t\t  [1] Insert at Beginning\n");
                                            printf("\t\t\t  [2] Insert at End\n");
                                            printf("\t\t\t  [3] Delete a Node\n");
                                            printf("\t\t\t  [4] Traverse\n");
                                            printf("\t\t\t  [5] Search for a Node\n");
                                            printf("\t\t\t  [6] Reverse the List\n");
                                            printf("\t\t\t  [7] Exit\n\n");
                                            printCentered("Enter your choice: ");
                                            scanf("%d", &ListOperation);

                                            int value, searchValue;
                                            switch (ListOperation) {
                                                case 1:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to insert at the beginning: ");
                                                    scanf("%d", &value);
                                                    insertAtBeginningCircular(&head, value);
                                                    break;
                                                case 2:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to insert at the end: ");
                                                    scanf("%d", &value);
                                                    insertAtEndCircular(&head, value);
                                                    break;
                                                case 3:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to delete: ");
                                                    scanf("%d", &value);
                                                    deleteNodeCircular(&head, value);
                                                    break;
                                                case 4:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered("Traversing Circular Linked List:\n");
                                                    traverseCircular(head);

                                                    do {
                                                        printf("\t\t\t     Type E to Exit: ");
                                                        scanf(" %c", &Exit);
                                                    } while (Exit != 'E');
                                                    break;
                                                case 5:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered(" Enter value to search: ");
                                                    scanf("%d", &searchValue);
                                                    if (searchCircular(head, searchValue)) {
                                                        printCentered("Value found in the list!\n");
                                                    } else {
                                                        printCentered("Value not found in the list.\n");
                                                    }
                                                    do {
                                                        printf("\t\t\t     Type E to Exit: ");
                                                        scanf(" %c", &Exit);
                                                    } while (Exit != 'E');
                                                    break;
                                                case 6:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printCentered("Reversing Circular Linked List...\n");
                                                    reverseCircular(&head);
                                                    printCentered("List reversed successfully!\n");

                                                    do {
                                                        printf("\t\t\t     Type E to Exit: ");
                                                        scanf(" %c", &Exit);
                                                    } while (Exit != 'E');
                                                    break;
                                                case 7:
                                                    printf("\e[1;1H\e[2J"); // Clear screen
                                                    printf("\n\n\n\n\n");
                                                    printf("Returning to Linked List Menu.\n");
                                                    break;
                                                default:
                                                    printf("Invalid choice!\n");
                                            }
                                        } while (ListOperation != 7);
                                    }
                                    break;

                                    
                                    case 4:  // Exit to Main Menu
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("Returning to Main Menu.\n");
                                        break;

                                    default:
                                        printf("Invalid choice! Please try again.\n");
                                }
                            } while (ListOption != 4);  // Exit when user selects "Return to Previous Menu"
                          break;

                        case 3: {  // Stack Operations
                                StackNode* top = NULL; // Stack initialized as empty
                                int maxSize = 5;       // Define the maximum stack size
                                do {
                                    printf("\e[1;1H\e[2J"); // Clear screen
                                    printf("\n\n\n\n\n");
                                    printCentered("Stack Operations:\n\n");
                                    printf("\t\t\t  [1] Push (Add to Stack)\n");
                                    printf("\t\t\t  [2] Pop (Remove from Stack)\n");
                                    printf("\t\t\t  [3] Peek (View Top Element)\n");
                                    printf("\t\t\t  [4] Display Stack\n");
                                    printf("\t\t\t  [5] Exit\n\n");
                                    printCentered("Enter your choice: ");
                                    scanf("%d", &ListOperation);

                                    int value;
                                    switch (ListOperation) {
                                        case 1:
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            printCentered(" Enter value to push onto the stack: ");
                                            scanf("%d", &value);
                                            push(&top, value, maxSize);
                                            break;
                                        case 2:
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            if (isEmpty(top)) {
                                                printCentered("Stack is empty. Nothing to pop.\n");
                                            } else {
                                                int poppedValue = pop(&top);
                                                printf("\n\n");
                                                printCentered("Popped value: ");
                                                printf("%d\n", poppedValue);
                                            }
                                            do {
                                                printf("\t\t\t     Type E to Exit: ");
                                                scanf(" %c", &Exit);
                                            } while (Exit != 'E');
                                            break;
                                        case 3:
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            if (isEmpty(top)) {
                                                printCentered("Stack is empty. No top element.\n");
                                            } else {
                                                printf("\n\n");
                                                printCentered("Top element is: ");
                                                printf("%d\n", peek(top));
                                            }
                                            do {
                                                printf("\t\t\t     Type E to Exit: ");
                                                scanf(" %c", &Exit);
                                            } while (Exit != 'E');
                                            break;
                                        case 4:
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            printCentered("Displaying Stack:\n");
                                            displayStack(top);

                                            do {
                                                printf("\t\t\t     Type E to Exit: ");
                                                scanf(" %c", &Exit);
                                            } while (Exit != 'E');
                                            break;
                                        case 5:
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            printf("Returning to Main Menu.\n");
                                            break;
                                        default:
                                            printf("Invalid choice!\n");
                                    }
                                } while (ListOperation != 5);
                            }
                            break;

                        case 4:
                           
                            int qchoice, qvalue;

                            do
                            {
                                printf("\e[1;1H\e[2J"); // Clear screen
                                printf("\n\n\n\n\n");
                                // Ask the user which type of queue to use
                                printCentered("Choose Queue Implementation Type:\n\n");
                                printf("\t\t\t[1] Array-based Queue\n");
                                printf("\t\t\t[2] Linked List-based Queue\n");
                                printf("\t\t\t[3] Exit\n\n");
                                printCentered("Enter your choice: ");
                                scanf("%d", &qchoice);

                                switch (qchoice)
                                {
                                case 1:
                                    Queue q;
                                    initializeQueue(&q);
                                    int choice, value;
                                    do {
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        printCentered("Queue Operations:\n\n");
                                        printf("\t\t\t\t[1] Enqueue\n");
                                        printf("\t\t\t\t[2] Dequeue\n");
                                        printf("\t\t\t\t[3] Peek\n");
                                        printf("\t\t\t\t[4] Display Queue\n");
                                        printf("\t\t\t\t[5] Exit\n\n");
                                        printCentered("Enter your choice: ");
                                        scanf("%d", &choice);

                                        switch (choice) {
                                            case 1:
                                                printCentered("Enter value to enqueue: ");
                                                scanf("%d", &value);
                                                enqueue(&q, value);
                                                
                                            break;
                                                break;
                                            case 2:
                                                dequeue(&q);
                                                do {
                                                    printf("\t\t\t     Type E to Exit: ");
                                                    scanf(" %c", &Exit);
                                                } while (Exit != 'E');
                                                break;
                                            case 3:
                                                value = peekQ(&q);
                                                if (value != -1) {
                                                    printf("\t\t\tFront value: %d\n", value);
                                                }
                                                do {
                                                    printf("\t\t\t     Type E to Exit: ");
                                                    scanf(" %c", &Exit);
                                                } while (Exit != 'E');
                                                break;
                                            case 4:
                                                traverseQueue(&q);
                                                do {
                                                    printf("\t\t\t     Type E to Exit: ");
                                                    scanf(" %c", &Exit);
                                                } while (Exit != 'E');
                                                break;
                                            case 5:
                                                printCentered("Exiting...\n");
                                                break;
                                            default:
                                                printf("Invalid choice!\n");
                                        }
                                    } while (choice != 5);

                                    break;
                                
                                default:
                                    break;
                                }
                            } while (qchoice != 3);
                            
                                                
                            break;
                        case 5: 
                            break;
                        default:
                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                            printf("Note: Invalid Option Choose Again!!");
                        
                        }
                    
                }while(LSDOption!=5);


                    break;
                case 2:
                    printf("Case for NLDS\n");
                    printCentered("Functionality not available: Code is still being written for this operation. \n\n");
                    break;
                case 3:
                    printf("Case for Strings\n");printCentered("Functionality not available: Code is still being written for this operation. \n\n");

                    break;
                case 4:
                    int sortOption, size;
                    do
                    {
                        printf("\e[1;1H\e[2J"); // Clear screen
                        printf("\n\n\n\n\n");
                        printCentered("=========================================================\n");
                        printf("\n");
                        printCentered("Welcome to Searching Menu!\n");
                        printf("\n");
                        printCentered("=========================================================\n");
                        printf("\n");
                        printCentered("Select the type of data to use the sorting algorithms:\n\n");
                        printf("\t\t\t   [1] Integer Array\n");
                        printf("\t\t\t   [2] Character Array\n");
                        printf("\t\t\t   [3] Strings\n");
                        printf("\t\t\t   [4] Exit\n\n");
                        printCentered("Enter your choice: ");
                        scanf("%d", &dataTypeSearch);

                        switch (dataTypeSearch)
                        {
                        case 1:
                            printf("\nEnter the size of the integer array: ");
                                scanf("%d", &size);

                                int arr[MaxLength];
                                printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                printf("\n\n\n\n\n");
                                for (int i = 0; i < size; i++)
                                {
                                    if( i >= 1)
                                    {
                                        printCentered("Previouse element: ");
                                        printf("%d\n", arr[i - 1]);
                                    }
                                    printf("\n\n");
                                    printCentered("Index [");
                                    printf("%d]\n", i);
                                    printCentered("Enter Array element: ");
                                    scanf("%d", &arr[i]);
                                    printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                    printf("\n\n\n\n\n");

                                 }

                                do{
                                    printf("\e[1;1H\e[2J"); // Clear screen
                                    printf("\n\n\n\n\n");
                                    printCentered("Select the type of soting algorithm:\n\n");
                                    printf("\t\t\t   [1] Insertion Sort\n");
                                    printf("\t\t\t   [2] Selection Sort\n");
                                    printf("\t\t\t   [3] Bubble Sort\n");
                                    printf("\t\t\t   [4] Counting Sort\n");
                                    printf("\t\t\t   [5] Quick Sort\n");
                                    printf("\t\t\t   [6] Radix Sort\n");
                                    printf("\t\t\t   [7] Bogo Sort\n");
                                    printf("\t\t\t   [8] Exit\n\n");
                                    printCentered("Enter your choice: ");
                                    scanf("%d", &sortOption);

                                    switch (sortOption) {
                                        case 1:
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            arrayToString(arr,size,StringInt);
                                            printCentered("Before Sorting:\n");
                                            printCentered(StringInt);
                                            printf("\n\n");
                                            insertionSort(arr,size);
                                            arrayToString(arr,size,StringInt);
                                            printCentered("After Sorting:\n");
                                            printCentered(StringInt);
                                            printf("\n\n");
                                            do
                                            {
                                                printf("\t\t\t    Type E to Exit: ");
                                                scanf(" %c", &Exit);
                                                                
                                            }while (Exit != 'E');
                                            break;
                                        case 2:
                                            printf("\e[1;1H\e[2J"); // Clear screen
                                            printf("\n\n\n\n\n");
                                            arrayToString(arr,size,StringInt);
                                            printCentered("Before Sorting:\n");
                                            printCentered(StringInt);
                                            printf("\n\n");
                                            selectionSort(arr,size);
                                            arrayToString(arr,size,StringInt);
                                            printCentered("After Sorting:\n");
                                            printCentered(StringInt);
                                            printf("\n\n");
                                            do
                                            {
                                                printf("\t\t\t    Type E to Exit: ");
                                                scanf(" %c", &Exit);
                                                                
                                            }while (Exit != 'E');
                                            break;
                
                                        case 3: // Bubble Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        arrayToString(arr, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        bubbleSort(arr, size);
                                        arrayToString(arr, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    case 4: // Counting Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        arrayToString(arr, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        int maxVal = getMaxValue(arr, size); // Automatically get the maximum value
                                        countingSort(arr, size, maxVal);
                                        arrayToString(arr, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;


                                    case 5: // Quick Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        arrayToString(arr, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        quickSort(arr, 0, size - 1);
                                        arrayToString(arr, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    case 6: // Radix Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        arrayToString(arr, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        radixSort(arr, size);
                                        arrayToString(arr, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    case 7: // Bogo Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        arrayToString(arr, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        bogoSort(arr, size);
                                        arrayToString(arr, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;
                                    case 8:
                                        break;

                                    default:
                                            printf("\nInvalid choice. Returning to main menu.\n");
                                    }
                            
                            }while(sortOption != 8);
                            
                            break;
                        
                        case 2:
                            printf("\nEnter the size of the character array: ");
                            scanf("%d", &size);

                            char arrC[MaxLength];
                            printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                            printf("\n\n\n\n\n");
                            for (int i = 0; i < size; i++) {
                                if (i >= 1) {
                                    printCentered("Previous element: ");
                                    printf("%c\n", arrC[i - 1]);
                                }
                                printf("\n\n");
                                printCentered("Index [");
                                printf("%d]\n", i);
                                printCentered("Enter Array element: ");
                                scanf(" %c", &arrC[i]); // Note the space before %c to consume any leftover newline
                                printf("\e[1;1H\e[2J"); // Regex to Clear the screen
                                printf("\n\n\n\n\n");
                            }

                            do {
                                printf("\e[1;1H\e[2J"); // Clear screen
                                printf("\n\n\n\n\n");
                                printCentered("Select the type of sorting algorithm:\n\n");
                                printf("\t\t\t   [1] Insertion Sort\n");
                                printf("\t\t\t   [2] Selection Sort\n");
                                printf("\t\t\t   [3] Bubble Sort\n");
                                printf("\t\t\t   [4] Counting Sort\n");
                                printf("\t\t\t   [5] Quick Sort\n");
                                printf("\t\t\t   [6] Radix Sort\n");
                                printf("\t\t\t   [7] Bogo Sort\n");
                                printf("\t\t\t   [8] Exit\n\n");
                                printCentered("Enter your choice: ");
                                scanf("%d", &sortOption);

                                switch (sortOption) {
                                    case 1:
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        charInsertionSort(arrC, size);
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;
                                     case 2: // Selection Sort
                                        printf("\e[1;1H\e[2J");
                                        printf("\n\n\n\n\n");
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        charSelectionSort(arrC, size);
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        break;
                                    case 3: // Bubble Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        charBubbleSort(arrC, size);  // Bubble sort call
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    case 4: // Counting Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        charCountingSort(arrC, size);  // Counting sort call
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    case 5: // Quick Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        charQuickSort(arrC, 0, size - 1);  // Quick sort call
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    case 6: // Radix Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        charRadixSort(arrC, size);  // Radix sort call
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    case 7: // Bogo Sort
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("Before Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        charBogoSort(arrC, size);  // Bogo sort call
                                        chararrayToString(arrC, size, StringInt);
                                        printCentered("After Sorting:\n");
                                        printCentered(StringInt);
                                        printf("\n\n");
                                        do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                        } while (Exit != 'E');
                                        break;

                                    default:
                                        printf("\nInvalid choice. Returning to main menu.\n");
                                }

                            } while (sortOption != 8);

                            break;
                            
                        case 3:
                            //Strings
                            break;


                        default:
                            break;
                        }

                    } while (dataTypeSearch != 4);
                    
                    break;
                case 5:
                    int searchOption;

                    do {
                        printf("\e[1;1H\e[2J"); // Clear screen
                        printf("\n\n\n\n\n");
                        printCentered("=========================================================\n");
                        printf("\n");
                        printCentered("Welcome to Searching Menu!\n");
                        printf("\n");
                        printCentered("=========================================================\n");
                        printf("\n");
                        printCentered("Select the type of data to use the searching algorithms:\n\n");
                        printf("\t\t\t   [1] Integer Array\n");
                        printf("\t\t\t   [2] Character Array\n");
                        printf("\t\t\t   [3] Strings\n");
                        printf("\t\t\t   [4] Exit\n\n");
                        printCentered("Enter your choice: ");
                        scanf("%d", &dataTypeSearch);

                        switch (dataTypeSearch) {
                            case 1: 
                                int size, target;

                                printf("\nEnter the size of the integer array: ");
                                scanf("%d", &size);

                                int arr[MaxLength];
                                printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                printf("\n\n\n\n\n");
                                for (int i = 0; i < size; i++)
                                {
                                    if( i >= 1)
                                    {
                                        printCentered("Previouse element: ");
                                        printf("%d\n", arr[i - 1]);
                                    }
                                    printf("\n\n");
                                    printCentered("Index [");
                                    printf("%d]\n", i);
                                    printCentered("Enter Array element: ");
                                    scanf("%d", &arr[i]);
                                    printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                    printf("\n\n\n\n\n");

                                 }

                                insertionSort(arr, size);

                                printf("\nEnter the target to search: ");
                                scanf("%d", &target);
                            do{
                                printf("\e[1;1H\e[2J"); // Clear screen
                                printf("\n\n\n\n\n");
                                printf("\nSelect the type of searching algorithm:\n\n");
                                printf("\t\t\t   [1] Linear Search\n");
                                printf("\t\t\t   [2] Binary Search\n");
                                printf("\t\t\t   [3] Exit\n\n");
                                printCentered("Enter your choice: ");
                                scanf("%d", &searchOption);

                                switch (searchOption) {
                                    case 1:
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        linearSearch(arr, size, target);
                                        do
                                        {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                                            
                                        }while (Exit != 'E');
                                        break;
                                    case 2:
                                        printf("\e[1;1H\e[2J"); // Clear screen
                                        printf("\n\n\n\n\n");
                                        binarySearch(arr, size, target);
                                        do
                                        {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                                            
                                        }while (Exit != 'E');
                                        break;
                                    case 3:
                                        break;
                                    default:
                                        printf("\nInvalid choice. Returning to main menu.\n");
                                }
                            
                            }while(searchOption != 3);

                                break;
                            case 2:
                                int sizeC;
                                char targetC;

                                printf("\nEnter the size of the character array: ");
                                scanf("%d", &sizeC);

                                char arrC[MaxLength];
                                printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                printf("\n\n\n\n\n");

                                for (int i = 0; i < sizeC; i++)
                                {
                                    if( i >= 1)
                                    {
                                        printCentered("Previouse element: ");
                                        printf("%c\n", arrC[i - 1]);
                                    }
                                    printf("\n\n");
                                    printCentered("Index [");
                                    printf("%d]\n", i);
                                    printCentered("Enter Array element: ");
                                    scanf(" %c", &arrC[i]);
                                    printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                    printf("\n\n\n\n\n");

                                 }

                                // Sorting for Binary Search (Bubble Sort)
                                for (int i = 0; i < sizeC - 1; i++) {
                                    for (int j = 0; j < sizeC - i - 1; j++) {
                                        if (arrC[j] > arrC[j + 1]) {
                                            char temp = arrC[j];
                                            arrC[j] = arrC[j + 1];
                                            arrC[j + 1] = temp;
                                        }
                                    }
                                }

                                printf("\nEnter the target character to search: ");
                                scanf(" %c", &targetC); // Use " %c" to handle whitespaces
                                do {
                                    printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                    printf("\n\n\n\n\n");
                                    printf("\nSelect the type of searching algorithm:\n\n");
                                    printf("\t\t\t   [1] Linear Search\n");
                                    printf("\t\t\t   [2] Binary Search\n");
                                    printf("\t\t\t   [3] Exit\n\n");
                                    printCentered("Enter your choice: ");
                                    scanf("%d", &searchOption);

                                    switch (searchOption) {
                                        case 1:
                                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                             printf("\n\n\n\n\n");
                                            linearSearchChar(arrC, sizeC, targetC);

                                            do {
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                                            
                                            }while (Exit != 'E');
                                            break;
                                        case 2:
                                            printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                                            printf("\n\n\n\n\n");
                                            binarySearchChar(arrC, sizeC, targetC);
                                            do{
                                            printf("\t\t\t    Type E to Exit: ");
                                            scanf(" %c", &Exit);
                                                            
                                            }while (Exit != 'E');
                                            break;
                                        case 3:
                                            break;
                                        default:
                                            printf("\nInvalid choice. Returning to main menu.\n");
                                    }
                                }while(searchOption != 3);
                                break;
                            
                            case 3:
                                printf("\nString Search not yet implemented.\n");
                                break;

                            case 4:
                                break;

                            default:
                                printf("\nInvalid choice. Please try again.\n");
                        }


                    } while (dataTypeSearch != 4);

        
                    break;
                case 6:
                    exit = true;
                    break;
                
                default:
                    printf("\e[1;1H\e[2J"); //Regex to Clear the screen
                    printf("Note: Invalid Option Choose Again!!");
                }
                    
            }while( DSAOption != 6  );


            break;
        }

        
    }

    return 0;
}


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

void chararrayToString(char arr[], int size, char *result) {
    int resultIndex = 0;  // Index for the result array
    
    for (int i = 0; i < size; i++) {
        // Add the opening bracket '['
        result[resultIndex++] = '[';
        
        // Add the character from the array
        result[resultIndex++] = arr[i];
        
        // Add the closing bracket ']'
        result[resultIndex++] = ']';
        
        // Add a space to separate the elements
        result[resultIndex++] = ' ';
    }
    
    // Null-terminate the result string
    result[resultIndex] = '\0';
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


void binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1, iteration = 1;

    printf("\n\nIterations of Binary Search:\n");
    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Iteration %d: Comparing target %d with element %d at index %d\n", iteration++, target, arr[mid], mid);

        if (arr[mid] == target) {
            printf("\nTarget %d found at index %d.\n", target, mid);
            return;
        } else if (arr[mid] < target) {
            left = mid + 1; // Move right
        } else {
            right = mid - 1; // Move left
        }
    }
    printf("\nTarget %d not found in the array.\n", target);
}

void linearSearch(int arr[], int size, int target) {
    printf("\n\nIterations of Linear Search:\n");
    for (int i = 0; i < size; i++) {
        printf("Iteration %d: Comparing target %d with element %d\n", i + 1, target, arr[i]);
        if (arr[i] == target) {
            printf("\nTarget %d found at index %d.\n", target, i);
            return;
        }
    }
    printf("\nTarget %d not found in the array.\n", target);
}


void linearSearchChar(char arr[], int size, char target) {
    printf("\n\nIterations of Linear Search:\n");
    for (int i = 0; i < size; i++) {
        printf("Iteration %d: Comparing target '%c' with element '%c'\n", i + 1, target, arr[i]);
        if (arr[i] == target) {
            printf("\nTarget '%c' found at index %d.\n", target, i);
            return;
        }
    }
    printf("\nTarget '%c' not found in the array.\n", target);
}

// Binary Search Function for Character Array
void binarySearchChar(char arr[], int size, char target) {
    int left = 0, right = size - 1, iteration = 1;

    printf("\n\nIterations of Binary Search:\n");
    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Iteration %d: Comparing target '%c' with element '%c' at index %d\n", iteration++, target, arr[mid], mid);

        if (arr[mid] == target) {
            printf("\nTarget '%c' found at index %d.\n", target, mid);
            return;
        } else if (arr[mid] < target) {
            left = mid + 1; // Move right
        } else {
            right = mid - 1; // Move left
        }
    }
    printf("\nTarget '%c' not found in the array.\n", target);
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

        printCentered(" Iteration");
        printf(" %d:\n",i);
        char s[100];
        arrayToString(arr, n, s);
        printCentered(s);
        printf("\n");
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        printCentered(" Iteration");
        printf(" %d:\n",i+1);
        char s[100];
        arrayToString(arr, size, s);
        printCentered(s);
        printf("\n");
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printCentered(" Iteration");
        printf(" %d:\n", i + 1);
        char s[100];
        arrayToString(arr, n, s);
        printCentered(s);
        printf("\n");
    }
}

int getMaxValue(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void countingSort(int arr[], int n, int maxVal) {
    int count[maxVal + 1];
    int output[n];
    for (int i = 0; i <= maxVal; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
    printCentered("Counting Sort Completed:\n");
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void radixSort(int arr[], int n) {
    int maxVal = getMaxValue(arr, n);
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(arr, n, 9); // Modify counting sort for digits
    }
}

void bogoSort(int arr[], int n) {
    while (!isSorted(arr, n)) {
        for (int i = 0; i < n; i++) {
            int randomIndex = rand() % n;
            int temp = arr[i];
            arr[i] = arr[randomIndex];
            arr[randomIndex] = temp;
        }
        printCentered("Shuffling Array:\n");
        char s[100];
        arrayToString(arr, n, s);
        printCentered(s);
        printf("\n");
    }
}

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}


//Sorting Algorithms for Characters

void charInsertionSort(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        printCentered("Iteration");
        printf(" %d:\n", i);
        char s[100];
        chararrayToString(arr, n, s);
        printCentered(s);
        printf("\n");
    }
}

void charSelectionSort(char arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        char temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        printCentered("Iteration");
        printf(" %d:\n", i + 1);
        char s[100];
        chararrayToString(arr, size, s);
        printCentered(s);
        printf("\n");
    }
}

void charBubbleSort(char arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        printCentered("Iteration");
        printf(" %d:\n", i + 1);
        char s[100];
        chararrayToString(arr, size, s);
        printCentered(s);
        printf("\n");
    }
}

void charCountingSort(char arr[], int size) {
    int count[256] = {0};
    char output[size];
    char maxVal = chargetMaxValue(arr, size);

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }

    printCentered("Sorted Output:");
    char s[100];
    chararrayToString(arr, size, s);
    printCentered(s);
    printf("\n");
}


void charQuickSort(char arr[], int low, int high) {
    if (low < high) {
        int pi = charpartition(arr, low, high);
        charQuickSort(arr, low, pi - 1);
        charQuickSort(arr, pi + 1, high);
    }
}

void charRadixSort(char arr[], int size) {
    // Find the maximum value to determine the number of digits
    char maxVal = chargetMaxValue(arr, size);
    for (char exp = 1; maxVal / exp > 0; exp *= 10) {
        charCountingSort(arr, size);
    }
}

void charBogoSort(char arr[], int size) {
    while (!charisSorted(arr, size)) {
        for (int i = 0; i < size; i++) {
            int randomIndex = rand() % size;
            char temp = arr[i];
            arr[i] = arr[randomIndex];
            arr[randomIndex] = temp;
        }
    }
}

int charisSorted(char arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int charpartition(char arr[], int low, int high) {
    char pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    char temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

char chargetMaxValue(char arr[], int size) {
    char max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}



void IntMergeArray(int* arr1, int size1, int* arr2, int size2, int* mergeArray) {
    int mergeSize = size1 + size2;

    // Copy elements from the first array
    for (int i = 0; i < size1; i++) {
        mergeArray[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < size2; i++) {
        mergeArray[size1 + i] = arr2[i];
    }
}


// Insert at the beginning (Singly Linked List)
void insertAtBeginningSingly(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Insert at the end (Singly Linked List)
void insertAtEndSingly(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete a node by value (Singly Linked List)
void deleteNodeSingly(Node** head, int value) {
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

// Traverse the list (Singly Linked List)
void traverseSingly(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int searchSingly(Node *head, int value) {
    Node *current = head;
    while (current != NULL) {
        if (current->data == value) {
            return 1; // Value found
        }
        current = current->next;
    }
    return 0; // Value not found
}

void reverseSingly(Node **head) {
    Node *prev = NULL;
    Node *current = *head;
    Node *next = NULL;

    while (current != NULL) {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the link
        prev = current;       // Move prev one step forward
        current = next;       // Move current one step forward
    }

    *head = prev; // Update the head to the last node
}


// Insert at the beginning (Doubly Linked List)
void insertAtBeginningDoubly(DNode** head, int data) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

// Insert at the end (Doubly Linked List)
void insertAtEndDoubly(DNode** head, int data) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    DNode* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete a node by value (Doubly Linked List)
void deleteNodeDoubly(DNode** head, int value) {
    DNode* temp = *head;

    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) return;

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        *head = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

// Traverse the doubly linked list
void traverseDoubly(DNode* head) {
    DNode* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Search for a value in the doubly linked list
int searchDoubly(DNode* head, int value) {
    DNode* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return 1; // Value found
        }
        current = current->next;
    }
    return 0; // Value not found
}

// Reverse the doubly linked list
void reverseDoubly(DNode** head) {
    DNode *temp = NULL;
    DNode *current = *head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        *head = temp->prev;
    }
}


// Insert at the beginning (Circular Linked List)
void insertAtBeginningCircular(CNode** head, int data) {
    CNode* newNode = (CNode*)malloc(sizeof(CNode));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode; // Points to itself
        *head = newNode;
    } else {
        CNode* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
    }
}

// Insert at the end (Circular Linked List)
void insertAtEndCircular(CNode** head, int data) {
    CNode* newNode = (CNode*)malloc(sizeof(CNode));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode; // Points to itself
        *head = newNode;
    } else {
        CNode* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

// Delete a node by value (Circular Linked List)
void deleteNodeCircular(CNode** head, int value) {
    if (*head == NULL) return;

    CNode* temp = *head;
    CNode* prev = NULL;

    // Handle deletion of head node
    if (temp->data == value) {
        if (temp->next == *head) { // Single node case
            free(temp);
            *head = NULL;
            return;
        }

        while (temp->next != *head) {
            temp = temp->next;
        }

        temp->next = (*head)->next;
        free(*head);
        *head = temp->next;
        return;
    }

    prev = temp;
    temp = temp->next;

    while (temp != *head) {
        if (temp->data == value) {
            prev->next = temp->next;
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

// Traverse the circular linked list
void traverseCircular(CNode* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    CNode* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}

// Search for a value in the circular linked list
int searchCircular(CNode* head, int value) {
    if (head == NULL) return 0;

    CNode* temp = head;
    do {
        if (temp->data == value) {
            return 1; // Value found
        }
        temp = temp->next;
    } while (temp != head);
    return 0; // Value not found
}

// Reverse the circular linked list
void reverseCircular(CNode** head) {
    if (*head == NULL || (*head)->next == *head) return;

    CNode *prev = NULL, *current = *head, *next = NULL;
    CNode *tail = *head;

    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != *head);

    tail->next = prev;
    *head = prev;
}


int countNodes(StackNode* top) {
    int count = 0;
    StackNode* temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Push operation: Adds an element to the stack
void push(StackNode** top, int data, int maxSize) {
    if (isFull(*top, maxSize)) {
        printf("Stack overflow! Unable to push %d.\n", data);
        return;
    }
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (!newNode) {
        printf("Heap overflow! Unable to push.\n");
        return;
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
    printf("Value %d pushed to stack.\n", data);
}

// Pop operation: Removes and returns the top element of the stack
int pop(StackNode** top) {
    if (isEmpty(*top)) {
        printf("Stack underflow! Unable to pop.\n");
        return -1;
    }
    StackNode* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

// Peek operation: Returns the top element of the stack without removing it
int peek(StackNode* top) {
    if (isEmpty(top)) {
        printf("Stack is empty. No top element.\n");
        return -1;
    }
    return top->data;
}

// Check if the stack is empty
int isEmpty(StackNode* top) {
    return top == NULL;
}

// Check if the stack is full (based on maxSize)
int isFull(StackNode* top, int maxSize) {
    return countNodes(top) >= maxSize;
}

// Display all elements of the stack
void displayStack(StackNode* top) {
    if (isEmpty(top)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack contents:\n");
    StackNode* temp = top;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}



// Function to initialize the queue
void initializeQueue(Queue* q)
{
    q->front = -1;
    q->rear = 0;
}

// Function to check if the queue is empty
bool isEmptyQ(Queue* q) { return (q->front == q->rear - 1); }

// Function to check if the queue is full
bool isFullQ(Queue* q) { return (q->rear == MaxLength); }

// Function to add an element to the queue (Enqueue
// operation)
void enqueue(Queue* q, int value)
{
    if (isFullQ(q)) {
        printf("Queue is full\n");
        return;
    }
    q->items[q->rear] = value;
    q->rear++;
}

// Function to remove an element from the queue (Dequeue
// operation)
void dequeue(Queue* q)
{
    if (isEmptyQ(q)) {
        printf("Queue is empty\n");
        return;
    }
    q->front++;
}

// Function to get the element at the front of the queue
// (Peek operation)
int peekQ(Queue* q)
{
    if (isEmptyQ(q)) {
        printf("Queue is empty\n");
        return -1; // return some default value or handle
                   // error differently
    }
    return q->items[q->front + 1];
}

// Function to print the current queue
void traverseQueue(Queue* q)
{
    if (isEmptyQ(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Current Queue: ");
    for (int i = q->front + 1; i < q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}