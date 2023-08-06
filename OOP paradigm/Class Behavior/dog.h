// Define a dog struct. This acts as a blueprint for creating new dogs. 
// We chose a struct because it allows us to bundle related data together 
// in a single unit.
typedef struct
{
    int id;
    unsigned char name[10];
    int age;
}dog_t;

// Declare functions that will act as "methods" for the dog struct. This 
// allows us to define behaviors specific to dogs.
void bark();
void dog_eat();