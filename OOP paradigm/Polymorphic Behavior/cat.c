#include "animal.h"
#include "cat.h"
#include <stdio.h>

cat_t cat;


void meow(){
    printf("The cat is meowing\n");
}

void eat_cat(){
    printf("The cat is eating\n");
}

void save_cat_id(int id){
    cat.animal.id = id;
}

int get_cat_id(){
    return cat.animal.id;
}

void save_meow_type(char *bark_type){
    cat.meow_type = bark_type;
}

char * get_meow_type(){
    return cat.meow_type;
}