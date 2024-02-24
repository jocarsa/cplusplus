#include <iostream>
#include <vector>
#include "variables.cpp"
#include "menu.cpp"
#define NOMBRE_PROGRAMA "Programa de gestión"


int main(){
    // Mensajes de bienvenida
    std::cout << NOMBRE_PROGRAMA << std::endl;
    std::cout << version << " " << autor << std::endl;
    /* Atrapamos la entrada de usuario
    y paramos la ejecución */
    std::cout << "Pulsa una tecla para continuar..." << std::endl;
    std::cin.get();
    menu();
    return 0;
}