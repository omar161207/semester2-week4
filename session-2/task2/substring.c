/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 
#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "The quick brown fox jumped over the lazy dog";
    char sub[] = "ump";
    char *result = strstr(str, sub);

    // Check if the substring was actually found
    if (result != NULL) {
        // 6. Print the answer appropriately
        
        // Print as a pointer (the memory address)
        printf("Pointer:   %p\n", (void*)result); //or
        
        // Print as a character (the first letter found)
        printf("Character: %c\n", *result); //or
        
        // Print as a string (starts at result and goes to the end)
        printf("String:    %s\n", result); 
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}

/*
You use the function strstr. Think of strstr as a person walking along the banner, 
looking for those three specific letters in a row.

When strstr finds "ump", it doesn't give you a new banner. 
It just points its finger at the start of the word.
"I found it! It starts right here at memory address#1021."
*/




