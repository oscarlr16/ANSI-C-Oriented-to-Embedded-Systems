#include <stdio.h>

// We're using a struct to represent a complex number because complex numbers naturally
// consist of two parts: the real part and the imaginary part.
typedef struct 
{
    float re;
    float im;
}complex;

// Declare a complex number and a pointer to a complex number.
complex x;
complex *p;

void printComplex(complex *p){
    printf("Real part of the complex number: %.2f\n", p->re);
    printf("Imaginary part of the complex number: %.2f\n", p->im);
}

int main(){
    p = &x;
    p->im = 1.2;
    p->re = 2.43;

    // Print the values of the complex number
    printComplex(p);
    
    return 0;
}

// This technique is used a lot in situations where we want to access encapsulated information
// in different parts of a program, but we don't want that information to have global scope.