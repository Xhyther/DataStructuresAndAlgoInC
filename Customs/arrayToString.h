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
