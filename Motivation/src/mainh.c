#include <stdio.h> 
#include <stdbool.h>
#include <complex.h>
#include <string.h> 
#include <stdlib.h>
#include <ctype.h>
#include "../include/dynamic_car.h"

//Funkionen aufrufen
int main(){

    dynamic_car_t* car = creat_dynamic_car();
    output_car(car);

    return 0;
}