#include <iostream>
int main(){
    // Mensajes de bienvenida
    std::cout << "Programa de gestión" << std::endl;
    std::cout << "v0.1 Jose Vicente Carratalá" << std::endl;
    /* Atrapamos la entrada de usuario
    y paramos la ejecución */
    std::cout << "Pulsa una tecla para continuar..." << std::endl;
    std::cin.get();
    return 0;
}