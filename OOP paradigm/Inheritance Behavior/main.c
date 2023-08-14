#include "dog.h"
#include <stdio.h>

int main(){
    save_dog_id(12);
    save_bark_type("Noisy");

    printf("The dog's id is %d\n",get_dog_id());
    printf("The bark type is %s\n",get_bark_type());

    return 0;
}