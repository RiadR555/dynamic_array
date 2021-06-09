#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY


typedef struct dynamic_car{
    char* name;
    char* Klasse;
    int Leistung;
    unsigned int size;
}dynamic_car_t;


//Funktionen eingeben
dynamic_car_t* creat_dynamic_car();
void output_car(dynamic_car_t* car);


#endif