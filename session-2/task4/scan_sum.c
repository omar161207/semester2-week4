
#include <stdio.h>

int main( void ) {

    // define suitable data
    int i,j;

    int count = scanf("%d %d", &i,&j); // case sensitive so u need to write in here exactly what u thing the user will write with the commas and spaces 

    if (count = 2){
        printf("Read %d values: %d and %d\n", count, i, j);
        int sum = i + j;
        printf("The sum is: %d\n", sum);

    }
    else{
        printf("Invalid format! Read only %d values.\n", count);
    }


    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    return 0;
}