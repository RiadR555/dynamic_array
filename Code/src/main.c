#include <stdio.h> 
#include <stdbool.h>
#include <complex.h>
#include <string.h> 
#include <stdlib.h>
#include <ctype.h>
#include "../include/dynamic_array.h"

//Funkionen aufrufen
int main(){

    dynamic_array_t* Array;
    int i;
    
    initArray(Array, 2);       //2 elemente mit calloc speichern
                               

    
    insert_element(Array, 4);
    insert_element(Array,25);
    insert_element(Array,77);
    insert_element(Array,33);
    
    
    delete_element(Array);
    //delete_element(Array);
    freeArray(Array);
    
    output(Array);
    

    
   
    

    

    return 0;
}