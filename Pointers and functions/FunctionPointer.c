#include <stdio.h>

void (*pFn)(void); // Declaration of function pointer

void function1(){
    printf("This is function 1\n");
}

void function2(){
    printf("This is function 2\n");
}

void function3(){
    printf("This is function 3\n");
}

int main(){
    pFn = function1; // Register the function pointer
    pFn(); // Call to the function pointed by function pointer pFn

    return 0;
}
