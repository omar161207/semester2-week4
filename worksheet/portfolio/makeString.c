
/*
Name:OMAR MOHAMED
Student ID:201994442
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[64] = "";   // Max safe size (10 args × 4 chars + 9 dashes + '\0')

    // Ensure at least one argument is provided
    if (argc < 2) { // less than 2 bcs 1 is the program name so we need to have min 2 where 2 is the first value 
        return 0;
    }

    for (int i = 1; i < argc; i++) {

        strcat(buffer, argv[i]);

        // Add '-' between arguments (not after last one)
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }


    // process the command-line data using appropriate string functions

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}