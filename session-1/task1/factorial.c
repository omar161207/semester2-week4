
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 } ;
    float d = 1; 

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    for(int i = 0; i < 20; i++){
      d *= f[i];
    }
    printf("The result of the factorial is %f\n", d);
    return 0;
 }
