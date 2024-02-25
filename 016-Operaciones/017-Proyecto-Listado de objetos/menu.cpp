void menu() {
     int opcion;
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

        switch (opcion) {
            case 1:
                std::cout << "Listado de registros" << std::endl;
                if (base_de_datos.empty()) {
                    std::cout << "No hay registros en la base de datos." << std::endl;
                } else {
                    std::cout << "Registros:" << std::endl;
                    for (const auto& contacto : base_de_datos) {
                        std::cout << "Nombre: " << contacto.nombre << std::endl;
                        std::cout << "Apellidos: " << contacto.apellidos << std::endl;
                        std::cout << "Edad: " << contacto.edad << std::endl;
                        std::cout << "Email: " << contacto.email << std::endl;
                        std::cout << std::endl;
                    }
                }
                break;
            case 2:
                std::cout << "Búsqueda de registros" << std::endl;
                break;
            case 3:
                {
                    std::cout << "Inserción de registros" << std::endl;
                    std::cout << "Introduce un nuevo nombre:" << std::endl;
                    Contacto contacto1;
                    std::cin >> contacto1.nombre;
                    std::cin >> contacto1.apellidos;
                    std::cin >> contacto1.edad;
                    std::cin >> contacto1.email;
                    base_de_datos.push_back(contacto1);
                }
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
            default:
                std::cout << "Opción no válida:" << std::endl;
        }
    menu();
}
