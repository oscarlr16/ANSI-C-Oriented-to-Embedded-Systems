#include "dog.h"
#include "cat.h"
#include <stdio.h>

int main(){
    // Create instances of our dog and cat structs. This is done to represent 
    dog_t max = {2023,"Max",2};
    cat_t magno = {2012,"Magno",12};

    // Call the "methods" associated with each struct. Although they're not true 
    // methods (as C doesn't have classes or methods in the OOP sense), they allow 
    // us to associate specific behaviors with each type of animal.
    bark();
    dog_eat();

    printf("Dog id: %d\n",max.id);
    printf("Dog name: %s\n",max.name);
    printf("Dog age: %d\n",max.age);

    meow();
    cat_eat();

    return 0;
}