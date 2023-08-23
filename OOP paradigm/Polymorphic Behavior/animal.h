#ifndef ANIMAL_H  // Debes usar #ifndef en lugar de #ifdef
#define ANIMAL_H

typedef enum{
    DOG,
    CAT
}ANIMAL_TYPE;
typedef union{
    void (*bark)(void);
    void (*meow)(void);
}make_a_sound_t;
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