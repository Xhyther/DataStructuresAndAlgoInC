void printCentered(const char* text) {
    int FullscreenWidth = 170;
    int standardConsolewidth = 80;
    // Adjust this to match your console width
    int textLength = strlen(text);
    int padding = (FullscreenWidth - textLength) / 2;

    for (int i = 0; i < padding; i++) {
        printf(" ");
    }
    printf("%s", text);
}