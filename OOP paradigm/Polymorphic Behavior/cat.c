#include "animal.h"
#include "cat.h"
#include <stdio.h>

cat_t cat;

// Simulate the sound behavior of a cat
void meow(){
    printf("The cat is meowing\n");
}

// Simulate the eating behavior of a cat
void eat_cat(){
    printf("The cat is eating\n");
}

// Store the provided ID for the cat
void save_cat_id(int id){
    cat.animal.id = id;
}

// Retrieve the stored ID of the cat
int get_cat_id(){
    return cat.animal.id;
}

// Store the type of meow for the cat (e.g., loud, soft)
void save_meow_type(char *bark_type){
    cat.meow_type = bark_type;
}

// Retrieve the stored type of meow for the cat
char * get_meow_type(){
    return cat.meow_type;
}
