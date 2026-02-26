
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b, *d;  // stack-based pointers

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );
    d = calloc( n, sizeof(float) );

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */
    
    if (!a || !b || !d ){
      printf("Memory Allocation Failed!\n");
      return 1;
    }

    for (int i = 0; i < n; i++){
      a[i] = (i + 1);
      b[i] = (i + 1) * 2;
    }

    d[0] = 0;
    for (int k = 0; k < n; k++) {
        d[0] += a[k] * b[k];
    }

    printf("Dot product: %.1f\n", d[0]);


    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    free(d);

    return 0;
 }