#include <stdio.h>

// Declare and initialize variables x and y
int x = 2, y = 0;

// Function to square a number using a pointer
void square(int *n){
    // Dereference the pointer n to get its value, square it, and store it back in memory
    *n *= *n;
}

int main(){
    // Pass the address of x to the square function, effectively squaring the value of x
    square(&x);
    // Print the squared value of x
    printf("The square of x is: %d\n", x);

    return 0;
}
