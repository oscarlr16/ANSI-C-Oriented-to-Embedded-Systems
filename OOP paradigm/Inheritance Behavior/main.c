#include "dog.h"
#include <stdio.h>

int main(){
    /*Aqui se crean 2 objetos siempre y cuando la clase hija dog 
    se encuentre publica en el encabezado doog.h*/
    dog_t dog = {
        .animal.age = 5,
        .animal.id = 55,
        .animal.name = "Max",
        .bark_type = "soft",
    };

    dog_t dog_2 = {
        .animal.age = 10,
        .animal.id = 13,
        .animal.name = "Toby",
        .bark_type = "soft",
    };

    save_dog_id(12);
    save_bark_type("Noisy");

    printf("The dog's id is %d\n",dog_2.animal.id);
    printf("The bark type is %s\n",dog_2.bark_type);

    return 0;
}