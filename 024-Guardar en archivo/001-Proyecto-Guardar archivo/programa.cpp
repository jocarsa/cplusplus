#include <iostream>
#include <vector>
#include <fstream> 
#include "Contacto.cpp"
#include "variables.cpp"
#include "funciones.cpp"
#include "menu.cpp"
#define NOMBRE_PROGRAMA "Programa de gestión"
#include "bienvenida.cpp"


int main(){
    bienvenida();
    menu();
    return 0;
}