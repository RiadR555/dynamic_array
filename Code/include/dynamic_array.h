#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY


typedef struct dynamic_array{
    int* ptr;                       //starten mit 2 Elemente
    unsigned long  used;             
    unsigned int  size;              //Anzahl der Elemente
}dynamic_array_t;


//Funktionen eingeben
void initArray(dynamic_array_t* Array, int initialsize);
void insert_element(dynamic_array_t* Array, int newsize);
void delete_element(dynamic_array_t* Array);
void freeArray(dynamic_array_t* Array);
void output(dynamic_array_t* Array);


#endif