
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4] = {{1,1,1,1},
                     {1,1,1,1},
                     {1,1,1,1},
                     {1,1,1,1}};
    float b[4][4] = {{1,1,1,1},
                     {1,1,1,1},
                     {1,1,1,1},
                     {1,1,1,1}};
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */

    for(int i = 0; i < 4; i++){ //rows
      for(int j = 0; j < 4; j++){ // columns
         c[i][j] = a[i][j] + b[i][j]; 
         printf("%.0f ", c[i][j]);
     }
     printf("\n"); // after every row 
    }
       
       
    
    return 0;
 }
