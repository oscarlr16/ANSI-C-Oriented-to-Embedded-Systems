#include "animal.h"
#include "dog.h"
#include <stdio.h>

dog_t dog;


void bark(){
    printf("The dog is barking\n");
}

void eat_dog(){
    printf("The dog is eating\n");
}

void save_dog_id(int id){
    dog.animal.id = id;
}

int get_dog_id(){
    return dog.animal.id;
}

void save_bark_type(char *bark_type){
    dog.bark_type = bark_type;
}

char * get_bark_type(){
    return dog.bark_type;
}