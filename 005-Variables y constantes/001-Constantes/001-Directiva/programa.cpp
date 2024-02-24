#include <iostream>
#define NOMBRE_PROGRAMA "Programa de gestión"
int main(){
    const std::string version = "0.1"; 
    // Mensajes de bienvenida
    std::cout << NOMBRE_PROGRAMA << std::endl;
    std::cout << "v0.1 Jose Vicente Carratalá" << std::endl;
    /* Atrapamos la entrada de usuario
    y paramos la ejecución */
    std::cout << "Pulsa una tecla para continuar..." << std::endl;
    std::cin.get();
    return 0;
}