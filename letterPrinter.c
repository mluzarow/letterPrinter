/**************************************************************************
** letterPrinter.c
**
** Console application.  Prints whatever strings are input as arguments,
** printing each letter as a multi-line construct of the source letter.
** Each word goes on a new line.
****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int i = 0;

    //check if arguments are too few
    if (argc <= 1) {
        printf("\nUsage: letterPrinter [-help] \"phrase\"\nPhrase is the set of characters to print.\nExample: letterPrinter \"Hello World!\"\n\n");
        return(0);
    }

    //check for the [-help] argument
    for (i = 0; i < argc; i++) {
        if (strcmp(argv[i], "-help") == 0) {
            printf("\nUsage: letterPrinter [-help] \"phrase\"\nPhrase is the set of characters to print.\nExample: letterPrinter \"Hello World!\"\n\n");
            return(0);
        }
    }

    //collect the string from the arguments
    char input[255];
    int read = 0;
    int j = 0;
    int a = 0;

    //read through each input word after triggers and format
    for (i = 1; i < argc; i++) {
        for (j = 0; j < (strlen(argv[i])); j++) {
            if (argv[i][j] != '\0') {
                input[a] = argv[i][j];
                a++;
            }
        }
        input[a] = '$';
        a++;
    }
    input[a] = '\0';

    char output[5][2000];
    int c = 0;

	//List of every letter in the alphabet.  Looks up what letter it is and load the data into array.
    for (i = 0; i < strlen(input); i++) {
        if (input[i] == '$') {
            output[0][c] = '\0';
            output[1][c] = '\0';
            output[2][c] = '\0';
            output[3][c] = '\0';
            output[4][c] = '\0';

            printf("%s\n%s\n%s\n%s\n%s\n\n", output[0], output[1], output[2], output[3], output[4]);
            c = 0;
        } else if (input[i] == 'a' || input[i] == 'A') {
            output[0][c] = ' ';
            output[1][c] = 'A';
            output[2][c] = 'A';
            output[3][c] = 'A';
            output[4][c] = 'A';
            c += 1;
            output[0][c] = 'A';
            output[1][c] = 'A';
            output[2][c] = 'A';
            output[3][c] = 'A';
            output[4][c] = 'A';
            c += 1;
            output[0][c] = 'A';
            output[1][c] = ' ';
            output[2][c] = 'A';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'A';
            output[1][c] = 'A';
            output[2][c] = 'A';
            output[3][c] = 'A';
            output[4][c] = 'A';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'A';
            output[2][c] = 'A';
            output[3][c] = 'A';
            output[4][c] = 'A';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'b' || input[i] == 'B') {
            output[0][c] = 'B';
            output[1][c] = 'B';
            output[2][c] = 'B';
            output[3][c] = 'B';
            output[4][c] = 'B';
            c += 1;
            output[0][c] = 'B';
            output[1][c] = 'B';
            output[2][c] = 'B';
            output[3][c] = 'B';
            output[4][c] = 'B';
            c += 1;
            output[0][c] = 'B';
            output[1][c] = ' ';
            output[2][c] = 'B';
            output[3][c] = ' ';
            output[4][c] = 'B';
            c += 1;
            output[0][c] = 'B';
            output[1][c] = 'B';
            output[2][c] = 'B';
            output[3][c] = 'B';
            output[4][c] = 'B';
            c += 1;
            output[0][c] = 'B';
            output[1][c] = 'B';
            output[2][c] = ' ';
            output[3][c] = 'B';
            output[4][c] = 'B';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'c' || input[i] == 'C') {
            output[0][c] = ' ';
            output[1][c] = 'C';
            output[2][c] = 'C';
            output[3][c] = 'C';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'C';
            output[1][c] = 'C';
            output[2][c] = 'C';
            output[3][c] = 'C';
            output[4][c] = 'C';
            c += 1;
            output[0][c] = 'C';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'C';
            c += 1;
            output[0][c] = 'C';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'C';
            c += 1;
            output[0][c] = 'C';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'C';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'C';
            output[2][c] = ' ';
            output[3][c] = 'C';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'd' || input[i] == 'D') {
            output[0][c] = 'D';
            output[1][c] = 'D';
            output[2][c] = 'D';
            output[3][c] = 'D';
            output[4][c] = 'D';
            c += 1;
            output[0][c] = 'D';
            output[1][c] = 'D';
            output[2][c] = 'D';
            output[3][c] = 'D';
            output[4][c] = 'D';
            c += 1;
            output[0][c] = 'D';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'D';
            c += 1;
            output[0][c] = 'D';
            output[1][c] = 'D';
            output[2][c] = 'D';
            output[3][c] = 'D';
            output[4][c] = 'D';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'D';
            output[2][c] = 'D';
            output[3][c] = 'D';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'e' || input[i] == 'E') {
            output[0][c] = 'E';
            output[1][c] = 'E';
            output[2][c] = 'E';
            output[3][c] = 'E';
            output[4][c] = 'E';
            c += 1;
            output[0][c] = 'E';
            output[1][c] = 'E';
            output[2][c] = 'E';
            output[3][c] = 'E';
            output[4][c] = 'E';
            c += 1;
            output[0][c] = 'E';
            output[1][c] = ' ';
            output[2][c] = 'E';
            output[3][c] = ' ';
            output[4][c] = 'E';
            c += 1;
            output[0][c] = 'E';
            output[1][c] = ' ';
            output[2][c] = 'E';
            output[3][c] = ' ';
            output[4][c] = 'E';
            c += 1;
            output[0][c] = 'E';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'E';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'f' || input[i] == 'F') {
            output[0][c] = 'F';
            output[1][c] = 'F';
            output[2][c] = 'F';
            output[3][c] = 'F';
            output[4][c] = 'F';
            c += 1;
            output[0][c] = 'F';
            output[1][c] = 'F';
            output[2][c] = 'F';
            output[3][c] = 'F';
            output[4][c] = 'F';
            c += 1;
            output[0][c] = 'F';
            output[1][c] = ' ';
            output[2][c] = 'F';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'F';
            output[1][c] = ' ';
            output[2][c] = 'F';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'F';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'g' || input[i] == 'G') {
            output[0][c] = ' ';
            output[1][c] = 'G';
            output[2][c] = 'G';
            output[3][c] = 'G';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'G';
            output[1][c] = 'G';
            output[2][c] = 'G';
            output[3][c] = 'G';
            output[4][c] = 'G';
            c += 1;
            output[0][c] = 'G';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'G';
            c += 1;
            output[0][c] = 'G';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'G';
            c += 1;
            output[0][c] = 'G';
            output[1][c] = ' ';
            output[2][c] = 'G';
            output[3][c] = ' ';
            output[4][c] = 'G';
            c += 1;
            output[0][c] = 'G';
            output[1][c] = ' ';
            output[2][c] = 'G';
            output[3][c] = 'G';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'h' || input[i] == 'H') {
            output[0][c] = 'H';
            output[1][c] = 'H';
            output[2][c] = 'H';
            output[3][c] = 'H';
            output[4][c] = 'H';
            c += 1;
            output[0][c] = 'H';
            output[1][c] = 'H';
            output[2][c] = 'H';
            output[3][c] = 'H';
            output[4][c] = 'H';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = 'H';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = 'H';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'H';
            output[1][c] = 'H';
            output[2][c] = 'H';
            output[3][c] = 'H';
            output[4][c] = 'H';
            c += 1;
            output[0][c] = 'H';
            output[1][c] = 'H';
            output[2][c] = 'H';
            output[3][c] = 'H';
            output[4][c] = 'H';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'i' || input[i] == 'I') {
            output[0][c] = 'I';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'I';
            c += 1;
            output[0][c] = 'I';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'I';
            c += 1;
            output[0][c] = 'I';
            output[1][c] = 'I';
            output[2][c] = 'I';
            output[3][c] = 'I';
            output[4][c] = 'I';
            c += 1;
            output[0][c] = 'I';
            output[1][c] = 'I';
            output[2][c] = 'I';
            output[3][c] = 'I';
            output[4][c] = 'I';
            c += 1;
            output[0][c] = 'I';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'I';
            c += 1;
            output[0][c] = 'I';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'I';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'j' || input[i] == 'J') {
            output[0][c] = 'J';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'J';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'J';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'J';
            c += 1;
            output[0][c] = 'J';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'J';
            c += 1;
            output[0][c] = 'J';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'J';
            c += 1;
            output[0][c] = 'J';
            output[1][c] = 'J';
            output[2][c] = 'J';
            output[3][c] = 'J';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'J';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'k' || input[i] == 'K') {
            output[0][c] = 'K';
            output[1][c] = 'K';
            output[2][c] = 'K';
            output[3][c] = 'K';
            output[4][c] = 'K';
            c += 1;
            output[0][c] = 'K';
            output[1][c] = 'K';
            output[2][c] = 'K';
            output[3][c] = 'K';
            output[4][c] = 'K';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = 'K';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'K';
            output[2][c] = 'K';
            output[3][c] = 'K';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'K';
            output[1][c] = 'K';
            output[2][c] = ' ';
            output[3][c] = 'K';
            output[4][c] = 'K';
            c += 1;
            output[0][c] = 'K';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'K';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'l' || input[i] == 'L') {
            output[0][c] = 'L';
            output[1][c] = 'L';
            output[2][c] = 'L';
            output[3][c] = 'L';
            output[4][c] = 'L';
            c += 1;
            output[0][c] = 'L';
            output[1][c] = 'L';
            output[2][c] = 'L';
            output[3][c] = 'L';
            output[4][c] = 'L';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'L';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'L';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'L';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'm' || input[i] == 'M') {
            output[0][c] = 'M';
            output[1][c] = 'M';
            output[2][c] = 'M';
            output[3][c] = 'M';
            output[4][c] = 'M';
            c += 1;
            output[0][c] = 'M';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'M';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'M';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'M';
            output[1][c] = 'M';
            output[2][c] = 'M';
            output[3][c] = 'M';
            output[4][c] = 'M';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'n' || input[i] == 'N') {
            output[0][c] = 'N';
            output[1][c] = 'N';
            output[2][c] = 'N';
            output[3][c] = 'N';
            output[4][c] = 'N';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'N';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = 'N';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'N';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'N';
            output[1][c] = 'N';
            output[2][c] = 'N';
            output[3][c] = 'N';
            output[4][c] = 'N';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'o' || input[i] == 'O') {
            output[0][c] = ' ';
            output[1][c] = 'O';
            output[2][c] = 'O';
            output[3][c] = 'O';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'O';
            output[1][c] = 'O';
            output[2][c] = 'O';
            output[3][c] = 'O';
            output[4][c] = 'O';
            c += 1;
            output[0][c] = 'O';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'O';
            c += 1;
            output[0][c] = 'O';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'O';
            c += 1;
            output[0][c] = 'O';
            output[1][c] = 'O';
            output[2][c] = 'O';
            output[3][c] = 'O';
            output[4][c] = 'O';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'O';
            output[2][c] = 'O';
            output[3][c] = 'O';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'p' || input[i] == 'P') {
            output[0][c] = 'P';
            output[1][c] = 'P';
            output[2][c] = 'P';
            output[3][c] = 'P';
            output[4][c] = 'P';
            c += 1;
            output[0][c] = 'P';
            output[1][c] = 'P';
            output[2][c] = 'P';
            output[3][c] = 'P';
            output[4][c] = 'P';
            c += 1;
            output[0][c] = 'P';
            output[1][c] = ' ';
            output[2][c] = 'P';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'P';
            output[1][c] = 'P';
            output[2][c] = 'P';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'P';
            output[1][c] = 'P';
            output[2][c] = 'P';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'q' || input[i] == 'Q') {
            output[0][c] = ' ';
            output[1][c] = 'Q';
            output[2][c] = 'Q';
            output[3][c] = 'Q';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'Q';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'Q';
            c += 1;
            output[0][c] = 'Q';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'Q';
            c += 1;
            output[0][c] = 'Q';
            output[1][c] = ' ';
            output[2][c] = 'Q';
            output[3][c] = ' ';
            output[4][c] = 'Q';
            c += 1;
            output[0][c] = 'Q';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'Q';
            output[4][c] = 'Q';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'Q';
            output[2][c] = 'Q';
            output[3][c] = 'Q';
            output[4][c] = 'Q';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'r' || input[i] == 'R') {
            output[0][c] = 'R';
            output[1][c] = 'R';
            output[2][c] = 'R';
            output[3][c] = 'R';
            output[4][c] = 'R';
            c += 1;
            output[0][c] = 'R';
            output[1][c] = 'R';
            output[2][c] = 'R';
            output[3][c] = 'R';
            output[4][c] = 'R';
            c += 1;
            output[0][c] = 'R';
            output[1][c] = ' ';
            output[2][c] = 'R';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'R';
            output[1][c] = 'R';
            output[2][c] = 'R';
            output[3][c] = 'R';
            output[4][c] = 'R';
            c += 1;
            output[0][c] = 'R';
            output[1][c] = 'R';
            output[2][c] = ' ';
            output[3][c] = 'R';
            output[4][c] = 'R';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 's' || input[i] == 'S') {
            output[0][c] = ' ';
            output[1][c] = 'S';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'S';
            c += 1;
            output[0][c] = 'S';
            output[1][c] = 'S';
            output[2][c] = 'S';
            output[3][c] = ' ';
            output[4][c] = 'S';
            c += 1;
            output[0][c] = 'S';
            output[1][c] = ' ';
            output[2][c] = 'S';
            output[3][c] = ' ';
            output[4][c] = 'S';
            c += 1;
            output[0][c] = 'S';
            output[1][c] = ' ';
            output[2][c] = 'S';
            output[3][c] = 'S';
            output[4][c] = 'S';
            c += 1;
            output[0][c] = 'S';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'S';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 't' || input[i] == 'T') {
            output[0][c] = 'T';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'T';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'T';
            output[1][c] = 'T';
            output[2][c] = 'T';
            output[3][c] = 'T';
            output[4][c] = 'T';
            c += 1;
            output[0][c] = 'T';
            output[1][c] = 'T';
            output[2][c] = 'T';
            output[3][c] = 'T';
            output[4][c] = 'T';
            c += 1;
            output[0][c] = 'T';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'T';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'u' || input[i] == 'U') {
            output[0][c] = 'U';
            output[1][c] = 'U';
            output[2][c] = 'U';
            output[3][c] = 'U';
            output[4][c] = 'U';
            c += 1;
            output[0][c] = 'U';
            output[1][c] = 'U';
            output[2][c] = 'U';
            output[3][c] = 'U';
            output[4][c] = 'U';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'U';
            c += 1;
            output[0][c] = 'U';
            output[1][c] = 'U';
            output[2][c] = 'U';
            output[3][c] = 'U';
            output[4][c] = 'U';
            c += 1;
            output[0][c] = 'U';
            output[1][c] = 'U';
            output[2][c] = 'U';
            output[3][c] = 'U';
            output[4][c] = 'U';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'v' || input[i] == 'V') {
            output[0][c] = 'V';
            output[1][c] = 'V';
            output[2][c] = 'V';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'V';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'V';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'V';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'V';
            output[1][c] = 'V';
            output[2][c] = 'V';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'w' || input[i] == 'W') {
			output[0][c] = 'W';
            output[1][c] = 'W';
            output[2][c] = 'W';
            output[3][c] = 'W';
            output[4][c] = 'W';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'W';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'W';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'W';
            c += 1;
            output[0][c] = 'W';
            output[1][c] = 'W';
            output[2][c] = 'W';
            output[3][c] = 'W';
            output[4][c] = 'W';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'x' || input[i] == 'X') {
			output[0][c] = 'X';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'X';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'X';
            output[2][c] = ' ';
            output[3][c] = 'X';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = 'X';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = 'X';
            output[2][c] = ' ';
            output[3][c] = 'X';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'X';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'X';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'y' || input[i] == 'Y') {
            output[0][c] = 'Y';
            output[1][c] = 'Y';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'Y';
            output[1][c] = 'Y';
            output[2][c] = 'Y';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = 'Y';
            output[3][c] = 'Y';
            output[4][c] = 'Y';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = 'Y';
            output[3][c] = 'Y';
            output[4][c] = 'Y';
            c += 1;
            output[0][c] = 'Y';
            output[1][c] = 'Y';
            output[2][c] = 'Y';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = 'Y';
            output[1][c] = 'Y';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == 'z' || input[i] == 'Z') {
            output[0][c] = 'Z';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'Z';
            c += 1;
            output[0][c] = 'Z';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = 'Z';
            output[4][c] = 'Z';
            c += 1;
            output[0][c] = 'Z';
            output[1][c] = ' ';
            output[2][c] = 'Z';
            output[3][c] = ' ';
            output[4][c] = 'Z';
            c += 1;
            output[0][c] = 'Z';
            output[1][c] = 'Z';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'Z';
            c += 1;
            output[0][c] = 'Z';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = 'Z';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == '!') {
            output[0][c] = '!';
            output[1][c] = '!';
            output[2][c] = '!';
            output[3][c] = ' ';
            output[4][c] = '!';
            c += 1;
            output[0][c] = '!';
            output[1][c] = '!';
            output[2][c] = '!';
            output[3][c] = ' ';
            output[4][c] = '!';
            c += 1;
            output[0][c] = ' ';
            output[1][c] = ' ';
            output[2][c] = ' ';
            output[3][c] = ' ';
            output[4][c] = ' ';
            c += 1;
        } else if (input[i] == '?') {

        }
    }

    return(0);
}
