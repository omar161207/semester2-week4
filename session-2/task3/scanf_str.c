
#include <stdio.h>

int main( void ) {
    char input[10]; // 10 bytes

    int count = scanf("%s",input);
    //int count = scanf("%9s",input);

    printf("Read %d value\n",count); // count of the characters is stored in count each index is a count abc is 4 char includding \0
    printf("Values: %s\n",input);    // input of the user is stored in input to print use %s
    return 0;
                                      
}

/*
case 1: abc
the program is designed for qo bytes, abc is 3 characters + the null terminatot \0 = 4 bytes so it is still within the 10 bytes; 
the program executes normally

case 2: abc def
the program only reads abc becasue the %s format specifier in scanf stops reading as soon as it encounters a whitespace(space,tab,newline)

case 3: abcdefghijk
the program is again designed only for 10 bytes while here in this case it is 11 + the null terminator \0 so it is 12 bytes which is greater than 10

!!note: the program will not print the 10 bytes abd leave out the 2 rest but it will crash 

Fix for case 3:

Use the %9; The %9s tells scanf to read at most 9 characters, leaving the 10th spot for the mandatory null terminator. 
If you type 20 characters now, it will simply take the first 9 and ignore the rest, keeping your memory safe.
*/