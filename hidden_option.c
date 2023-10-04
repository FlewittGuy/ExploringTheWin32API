/*
* hidden_option.c
* 
* Author: Logan Seeley
* Date: 2023-10-03
* 
* (C) Logan Seeley 2023
*
* Programmed was designed to be cracked using reverse engineering
* The goal is to get the "How did you get here..?" message box without editting the source code
*/

#include <windows.h>
#include <stdio.h>

int main() {
    // Message box with Yes/No options
    int selected = MessageBoxW(
        NULL,
        L"Do you like cookies?",
        L"Question",
        MB_YESNO | MB_ICONQUESTION
    );

    if (selected == IDYES) {  // If we selected yes
        MessageBoxW(
            NULL,
            L"I like cookies as well <3",
            L"Yay!",
            MB_OK | MB_ICONINFORMATION
        );
    } else if (selected == IDNO) {  // If we selected no
        MessageBoxW(
            NULL,
            L"That's it. I'm formatting C.",
            L"You monster...",
            MB_OK | MB_ICONERROR
        );
    } else {  // If neither was selected (impossible... or is it?)
        MessageBoxW(
            NULL,
            L"How did you get here..?",
            L"What???",
            MB_OK | MB_ICONQUESTION
        );
    }

    return EXIT_SUCCESS;
}