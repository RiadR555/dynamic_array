#include <stdio.h> 
#include <stdbool.h>
#include <complex.h>
#include <string.h> 
#include <stdlib.h>
#include <ctype.h>
#include "../include/dynamic_array.h"





void initArray(dynamic_array_t* Array, int initialsize){
    Array->ptr = calloc(initialsize, sizeof(int));
    Array->size = initialsize;
    Array->used = 0;
}

void insert_element(dynamic_array_t* Array, int element){

    if (Array->used == Array->size){
        Array->size += 1;
        Array->ptr = realloc(Array->ptr, Array->size * sizeof(int));    
    }
    Array->ptr[Array->used++] = element; 
}



 void delete_element(dynamic_array_t* Array) {
    int i;

    if(Array->used <= Array->size){
        Array->size -=  1;
        Array->ptr = realloc(Array->ptr, Array->size * sizeof(int));   
    }
    Array->used--;
    for (i=Array->size; i >= 0; i--){
        Array->ptr[Array->used] = 0;
    }
    
    
    printf("done!\n");

}


void freeArray(dynamic_array_t* Array){
    free(Array->ptr);
    Array->ptr = NULL;
    Array->used = Array->size = 0;

    free(Array);
}

void output(dynamic_array_t* Array){

    int i;
    for(i=0; i < Array->size  ; i++){
        printf("Element %d: %d\n", i, Array->ptr[i]);
    } 

    printf("number of used Elements: %lu\n", Array->used);
    printf("number of Elements %d\n", Array->size);
}
