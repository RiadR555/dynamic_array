#include <stdio.h> 
#include <stdbool.h>
#include <complex.h>
#include <string.h> 
#include <stdlib.h>
#include <ctype.h>
#include "../include/dynamic_car.h"


//Funktionen erstellen durch erstellten Library

dynamic_car_t* creat_dynamic_car(){

    int i = 0;          
    int car_number = 2;             
    dynamic_car_t* car = malloc(car_number *  sizeof(dynamic_car_t));   //Allocation
    

    if(car == NULL){
        printf("Error!\n");
    }

    
    return car;
}



void output_car(dynamic_car_t* car) {

    if(car == NULL){
        printf("Error!\n");
    }

    int i = 0;
    int car_number = 2;
    
    //Eingabe
    for(int i=0; i<car_number; i++){
        //name casting + allocation
        car[i].name = (char*)malloc(sizeof(char*));
        car[i].name = "Benz";
        //klasse casting + allocation
        car[i].Klasse = (char*)malloc(sizeof(char*));
        car[i].Klasse = "E-Klasse";
        //leistung...
    }

    for(i=0; i<car_number; i++){
        printf("Name: %s, Klasse: %s\n", car->name, car->Klasse);
    }
}

