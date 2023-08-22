#include "animal.h"

//Clase hija perro
typedef struct
{
    animal_t animal;
    char *bark_type;
}dog_t;

void bark();
void eat_dog();
void save_dog_id(int id);
int get_dog_id();
void save_bark_type(char *bark_type);
char * get_bark_type();