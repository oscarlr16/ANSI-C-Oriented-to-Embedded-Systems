#include "animal.h"
#include "dog.h"
#include <stdio.h>

dog_t dog;

// Simulate the sound behavior of a dog
void bark(){
    printf("The dog is barking\n");
}

// Simulate the eating behavior of a dog
void eat_dog(){
    printf("The dog is eating\n");
}

// Store the provided ID for the dog
void save_dog_id(int id){
    dog.animal.id = id;
}

// Retrieve the stored ID of the dog
int get_dog_id(){
    return dog.animal.id;
}

// Store the type of bark for the dog (e.g., loud, soft)
void save_bark_type(char *bark_type){
    dog.bark_type = bark_type;
}

// Retrieve the stored type of bark for the dog
char * get_bark_type(){
    return dog.bark_type;
}
