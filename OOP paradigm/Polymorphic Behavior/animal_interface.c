#include "animal.h"
#include "dog.h"
#include "cat.h"

const animal_t animal[] = {
    {
        .eat = eat_dog,
        .save_id = save_dog_id,
        .get_id = get_dog_id,
        .make_a_sound = bark 
    },
    {
        .eat = eat_cat,
        .save_id = save_cat_id,
        .get_id = get_cat_id,
        .make_a_sound = meow
    }
};