// Define a cat struct. Like with the dog struct, this acts as a blueprint 
// for creating new cats, allowing us to bundle related data together in a 
// single unit.
typedef struct
{
    int id;
    unsigned char name[10];
    int age;
}cat_t;

// Declare functions that will act as "methods" for the cat struct.
void meow();
void cat_eat();