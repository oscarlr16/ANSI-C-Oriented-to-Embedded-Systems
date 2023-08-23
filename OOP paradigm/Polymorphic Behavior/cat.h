#include "animal.h"


typedef struct
{
    animal_t animal;
    char *meow_type;
}cat_t;

void meow();
void eat_cat();
void save_cat_id(int id);
int get_cat_id();
void save_cat_type(char *bark_type);
char * get_cat_type();