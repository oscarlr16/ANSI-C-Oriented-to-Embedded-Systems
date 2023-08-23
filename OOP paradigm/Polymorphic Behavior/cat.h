#include "animal.h"

// Struct to represent properties and behaviors specific to a cat
typedef struct
{
    animal_t animal;   // Inherit properties and behaviors of a generic animal
    char *meow_type;   // Specific attribute to determine type of meow (e.g., loud, soft)
}cat_t;

void meow();                   // Simulate the sound behavior of a cat
void eat_cat();                // Simulate the eating behavior of a cat
void save_cat_id(int id);      // Store the provided ID for the cat
int get_cat_id();              // Retrieve the stored ID of the cat
void save_cat_type(char *bark_type);   // Store the type of meow for the cat
char * get_cat_type();         // Retrieve the stored type of meow for the cat
