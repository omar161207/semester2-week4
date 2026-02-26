
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests

    // use 'strcmp' to compare 2 strings - print the return value
    int result = strcmp(str1, str2); // 
    printf("strcmp result: %d\n", result);

    // use 'strcat' to concatenate 2 strings - print the resulting string
    strcat(str1, str2);
    printf("strcat result: %s\n", str1);

    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3, "new string");
    printf("strcpy result: %s\n", str3);

    return 0;
}
/*
I used int result for strcmp because that function calculates a number and "hands" it back to you. 
You need a variable to "catch" that number so you can print it.

The other two functions, strcat and strcpy, don't calculate a new number for you to care about; 
instead, they reach into your memory and change the contents of your character arrays directly.
*/