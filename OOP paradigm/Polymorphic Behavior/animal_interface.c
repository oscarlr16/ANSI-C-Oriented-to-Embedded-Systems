#include "animal.h"
#include "dog.h"
#include "cat.h"

// Array of generic animals with specific functions for dogs and cats
const animal_t animal[] = {
    {
        .eat = eat_dog,           // Function pointer for a dog's eating behavior
        .save_id = save_dog_id,   // Function pointer to save dog's ID
        .get_id = get_dog_id,     // Function pointer to get dog's ID
        .make_a_sound = bark      // Function pointer for a dog's sound behavior
    },
    {
        .eat = eat_cat,           // Function pointer for a cat's eating behavior
        .save_id = save_cat_id,   // Function pointer to save cat's ID
        .get_id = get_cat_id,     // Function pointer to get cat's ID
        .make_a_sound = meow      // Function pointer for a cat's sound behavior
    }
};
