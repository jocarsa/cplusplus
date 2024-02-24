#include <iostream>
#define NOMBRE_PROGRAMA "Programa de gestión"
int main(){
    
    const std::string version = "0.1";
    const std::string autor = "Jose Vicente Carratala";
    int opcion;
    
    // Mensajes de bienvenida
    std::cout << NOMBRE_PROGRAMA << std::endl;
    std::cout << version << " " << autor << std::endl;
    /* Atrapamos la entrada de usuario
    y paramos la ejecución */
    std::cout << "Pulsa una tecla para continuar..." << std::endl;
    std::cin.get();
    std::cout << "Selecciona una opción" << std::endl;
    std::cout << "1.-Listado de registros" << std::endl;
    std::cout << "2.-Buscar registros" << std::endl;
    std::cout << "3.-Insertar un registro" << std::endl;
    std::cout << "4.-Actualizar un registro" << std::endl;
    std::cout << "5.-Eliminar un registro" << std::endl;
    std::cout << "6.-Salir del programa" << std::endl;
    std::cout << "Opción escogida (1-6):" << std::endl;
    std::cin >> opcion;
    std::cout << "La opción seleccionada es:" << opcion << std::endl;
    if(opcion < 7 && opcion > 0){
        std::cout << "Opción válida:" << std::endl;
        switch(opcion){
            
        }
    }else{
        std::cout << "Opción no válida:" << std::endl;
    }
    return 0;
}