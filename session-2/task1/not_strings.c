
#include <stdio.h>

int main( void ) {

    char charArray[5] = {'h','e','l','l','o'};
    char charString[] = "hello";
 
    printf("As array: %s\n",charArray);     // strange behaviour? prints it more than once bcs there is no null charecter \0
    printf("Length of array: %ld\n",sizeof(charArray));   // expected result: This measures the total memory allocated for the array, regardless of null terminator or content That’s why it prints 5, exactly the number of elements you declared

    printf("As string: %s\n",charString);   // normal behaviour: charString is automaticallyt null-terminated so %s prints characters until it hits \0
    printf("Length of string: %ld\n",sizeof(charString));   // includes silent character \O: because char string is automattically null terminated then there is automatically a \0 in the end so it is counted as 6 char not 5

    return 0;
}
