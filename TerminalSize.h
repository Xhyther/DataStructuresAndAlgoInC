#include <stdio.h>

#if defined(_WIN32) || defined(_WIN64) // Windows system
#include <windows.h>
void setTerminalSize() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hConsole == INVALID_HANDLE_VALUE) {
        fprintf(stderr, "Error: Unable to get console handle.\n");
        return;
    }

    // Set the screen buffer size
    COORD bufferSize = {80, 24};
    if (!SetConsoleScreenBufferSize(hConsole, bufferSize)) {
        fprintf(stderr, "Error: Unable to set screen buffer size.\n");
        return;
    }

    // Set the window size
    SMALL_RECT windowSize = {0, 0, 79, 23}; // Coordinates: left, top, right, bottom
    if (!SetConsoleWindowInfo(hConsole, TRUE, &windowSize)) {
        fprintf(stderr, "Error: Unable to set console window size.\n");
        return;
    }

    printf("Terminal size set to 80x24 on Windows.\n");
}
#else // Unix-like system
#include <sys/ioctl.h>
#include <unistd.h>
void setTerminalSize() {
    struct winsize ws;
    ws.ws_row = 24;  // Set the number of rows
    ws.ws_col = 80;  // Set the number of columns
    ws.ws_xpixel = 0; // Optional, can leave as 0
    ws.ws_ypixel = 0; // Optional, can leave as 0

    // Apply the new terminal size
    if (ioctl(STDOUT_FILENO, TIOCSWINSZ, &ws) == -1) {
        perror("Error setting terminal size");
    } else {
        printf("Terminal size set to 80x24 on Unix.\n");
    }
}
#endif

int main() {
    setTerminalSize();
    return 0;
}
