#include <stdio.h>

// Defining a new struct type to represent a triangle
typedef struct triangle
{
    char _base;
    char height;
}triangle_t;

// Defining a struct type to represent a square
struct square
{
    int side_a;
    int side_b;
};

// Function to print the values of a triangle
void printTriangle(triangle_t t){
    printf("Base of triangle: %d\n", t._base);
    printf("Height of triangle: %d\n", t.height);
}

// Function to print the values of a square
void printSquare(struct square s){
    printf("Side a of square: %d\n", s.side_a);
    printf("Side b of square: %d\n", s.side_b);
}

int main(){
    triangle_t t;  // Declaring a variable of type triangle_t
    struct square s; // Declaring a variable of type struct square

    t._base = 10;
    t.height = 20;

    s.side_a = 30000;
    s.side_b = 23000;  // Assigning value to the other side of the square

    printTriangle(t);
    printSquare(s);

    return 0;
}
