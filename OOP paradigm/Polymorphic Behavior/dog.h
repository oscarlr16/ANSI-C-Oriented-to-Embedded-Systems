#include "animal.h"

// Struct to represent properties and behaviors specific to a dog
typedef struct
{
    animal_t animal;   // Inherit properties and behaviors of a generic animal
    char *bark_type;   // Specific attribute to determine type of bark (e.g., loud, soft)
}dog_t;

void bark();                   // Simulate the sound behavior of a dog
void eat_dog();                // Simulate the eating behavior of a dog
void save_dog_id(int id);      // Store the provided ID for the dog
int get_dog_id();              // Retrieve the stored ID of the dog
void save_bark_type(char *bark_type);   // Store the type of bark for the dog
char * get_bark_type();        // Retrieve the stored type of bark for the dog
