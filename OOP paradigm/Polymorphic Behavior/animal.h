#ifndef ANIMAL_H  // Protection against double inclusion
#define ANIMAL_H

// Enum to represent the type of animal (dog or cat)
typedef enum{
    DOG,
    CAT
}ANIMAL_TYPE;

// Union to represent the type of sound the animal can make (either bark or meow)
typedef union{
    void (*bark)(void);
    void (*meow)(void);
}make_a_sound_t;

// Struct to represent the properties and behaviors of an animal
typedef struct
{
    int id;
    unsigned char name[10];
    int age;
    void (*eat)(void);
    void (*save_id)(int id);
    int (*get_id)(void);
    make_a_sound_t make_a_sound; 
} animal_t;

extern const animal_t animal[];

#endif // ANIMAL_H
