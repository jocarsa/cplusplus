void menu(){
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
            case 1:
                std::cout << "Listado de registros" << std::endl;
                for (const auto& registro : base_de_datos) {
                    std::cout << registro  << std::endl;
                }
                break;
            case 2:
                std::cout << "Búsqueda de registros" << std::endl;
                break;
            case 3:
                std::cout << "Inserción de registros" << std::endl;
                std::cout << "Introduce un nuevo nombre:" << std::endl;
                std::cin >> nombre; 
                base_de_datos.push_back(nombre);
                break;
            case 4:
                std::cout << "Actualización de registros" << std::endl;
                break;
            case 5:
                std::cout << "Eliminación de registros" << std::endl;
                break;
            case 6:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
        }
    }else{
        std::cout << "Opción no válida:" << std::endl;
    }
    menu();
}