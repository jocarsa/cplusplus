#include <iostream>
#include <vector>
#include <limits>
#include "Contacto.cpp"
#include "variables.cpp"
#include "funciones.cpp"
#include "menu.cpp"
#define NOMBRE_PROGRAMA "Programa de gestión"
#include "bienvenida.cpp"
#include <fstream>


int main(){
    limpiarPantalla();
    bienvenida();
    limpiarPantalla();
    menu();
    return 0;
}