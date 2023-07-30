#include <stdio.h>

// Defining a new type for a 2D point. We're using a struct because we want to group
// the x and y coordinates together under one name for easier manipulation.
typedef struct
{
    float x;
    float y;
}point;

// Defining a new type for a line in 2D space. The line is defined by two points,
// so we use the previously defined point struct. This is an example of a nested struct.
typedef struct
{
    point a;
    point b;
}line;

void printPoint(point p){
    printf("Coordinates of the point are: (%.2f, %.2f)\n", p.x, p.y);
}

void printLine(line m){
    printf("Coordinates of point a are: ");
    printPoint(m.a);
    printf("Coordinates of point b are: ");
    printPoint(m.b);
}

int main(void){
    // Declaring a variable of type line. We're using our custom struct type here
    // because we want to represent a line in 2D space, which is most conveniently
    // done using two points.
    line m;

    // Assigning values to the coordinates of the points that make up the line.
    // We're doing this to give actual values to our line.
    m.a.x = 1.2;
    m.a.y = 7.7;
    m.b.x = 38.5;
    m.b.y = 17.8;
    printLine(m);

    return 0;
}
