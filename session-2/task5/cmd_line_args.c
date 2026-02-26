
/*
 * C accesses command line data through parameters to main: argc, argv
 * Compile and test the code:
 *   ./cmd_line_args abc 123 hello
 */

#include <stdio.h>

int main( int argc, char **argv ) {

    printf("Number of args: %d\n",argc);

    for( int k=0; k<argc; ++k ) {
        printf("argv[%d]: %s\n",k,argv[k]);
    }
    return 0;
}

// What is printed?
// What form is the data?

/*
 * COMMAND-LINE ARGUMENTS (argc and argv)
 * * 1. int argc (Argument Count): 
 * - Stores the number of strings typed in the terminal command.
 * - Always >= 1 because argv[0] is the program name.
 * * 2. char **argv (Argument Vector): 
 * - A "pointer to pointers" (an array of strings).
 * - argv[0]: The executable's name/path.
 * - argv[1]...argv[n]: The actual data typed by the user.
 * * 3. Scope: 
 * - These are defined inside main() because they are parameters 
 * passed by the Operating System (OS) at startup.
 * * 4. Data Type: 
 * - Everything in argv is a string ("123", not 123).
 * * 5. Logic: 
 * - The 'for' loop uses 'argc' to safely iterate through 'argv' 
 * without accessing out-of-bounds memory.
 */