/**************************************************************************
** letterPrinter.c
**
** Console application.  Prints whatever strings are input as arguments,
** printing each letter as a multi-line construct of the source letter.
** Each word goes on a new line.
****************************************************************************/
#include "letterPrinter.h"

// Print the help message to the user and quit program
void printHelp (void) {
   printf ("Letter Printer - V%d.%d.%d\n\n"
           "Usage: [-h] letterPrinter.exe WORD WORD ... WORD\n"
           "Required Arguments:\n"
           "Each WORD is an ASCII string, separated by a space.\n"
           "Program requires at least one word of one a minimum one ASCII character in length.\n"
           "Example: letterPrinter.exe \"Hello World!\"\n"
           "Optional Arguments:\n"
           "-h, --help      Show this help message.\n"
           , VERSION_MAJOR, VERSION_MINOR, VERSION_SMALL);

            exit (0);
}

// Translate ASCII to LETTER_DICT code
char translate (char c) {
    // Char is a - z
    if (c > 96 && c < 123) {
        c -= 97;
    // Char is A - Z
    } else if (c > 64 && c < 91) {
        c -= 65;
    } else if (c == 33) {
        c -= 7;
    }

    return (c);
}

int main(int argc, char** argv) {
    int i = 0;
    // Check if arguments are too few (only letterPrinter.exe or nonsense text input)
    if (argc <= 1) {
        printHelp ();
    }

    // Check for the [--help] | [-h] arguments
    for (i = 0; i < argc; i++) {
        if ((strcmp (argv [i], "--help") == 0) || (strcmp (argv [i], "-h") == 0)) {
            printHelp ();
        }
    }

    // Make output buffer (set of 5 char*)
    char ** outputBuffer = malloc (sizeof (char*) * 5);
    // Make string buffers (5 strings MAX size 7 char w/ 200 draws)
    outputBuffer[0] = malloc (sizeof (char) * 7 * 200);
    outputBuffer[1] = malloc (sizeof (char) * 7 * 200);
    outputBuffer[2] = malloc (sizeof (char) * 7 * 200);
    outputBuffer[3] = malloc (sizeof (char) * 7 * 200);
    outputBuffer[4] = malloc (sizeof (char) * 7 * 200);

    unsigned int len;
    unsigned char c;
    unsigned int j;
    // Read through all the input strings
    for (i = 1; i < argc; i++) {
        // Blank the character buffer
        strcpy (outputBuffer[0], "");
        strcpy (outputBuffer[1], "");
        strcpy (outputBuffer[2], "");
        strcpy (outputBuffer[3], "");
        strcpy (outputBuffer[4], "");

        // Save length of current input string
        len = strlen (argv[i]);
        j = 0;
        // Read through each character of the current input string
        for (j = 0; j < len; j++) {

            // Get ID code for letter in LETTER_DICT
            c = translate (argv[i][j]);

            // Add LETTER_DICT strings to outputBuffer
            strcat (outputBuffer[0], LETTER_DICT[c][0]);
            strcat (outputBuffer[1], LETTER_DICT[c][1]);
            strcat (outputBuffer[2], LETTER_DICT[c][2]);
            strcat (outputBuffer[3], LETTER_DICT[c][3]);
            strcat (outputBuffer[4], LETTER_DICT[c][4]);
        }

        // Print the letters
        printf ("%s\n%s\n%s\n%s\n%s\n\n", outputBuffer[0], outputBuffer[1], outputBuffer[2],
                outputBuffer[3], outputBuffer[4]);
    }

    // Finished writing all characters
    // Free heap memory
    free (outputBuffer[0]);
    free (outputBuffer[1]);
    free (outputBuffer[2]);
    free (outputBuffer[3]);
    free (outputBuffer[4]);
    free (outputBuffer);

    return (0);
}
