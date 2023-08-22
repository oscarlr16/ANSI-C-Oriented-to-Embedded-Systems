#ifndef ANIMAL_H  // Debes usar #ifndef en lugar de #ifdef
#define ANIMAL_H

//Clase padre
typedef struct
{
    int id;
    char name[10];
    int age;
}animal_t;
#endif // ANIMAL_H