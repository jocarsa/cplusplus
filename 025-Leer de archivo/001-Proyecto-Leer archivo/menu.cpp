
void menu() {
     int opcion;
        std::cout << "Selecciona una opción" << std::endl;
        std::cout << "1.-Listado de registros" << std::endl;
        std::cout << "2.-Buscar registros" << std::endl;
        std::cout << "3.-Insertar un registro" << std::endl;
        std::cout << "4.-Actualizar un registro" << std::endl;
        std::cout << "5.-Eliminar un registro" << std::endl;
        std::cout << "6.-Salir del programa" << std::endl;
        std::cout << "7.-Guardar registros" << std::endl;
        std::cout << "8.-Cargar registros" << std::endl;
        std::cout << "Opción escogida (1-6):" << std::endl;
        std::cin >> opcion;
        std::cout << "La opción seleccionada es:" << opcion << std::endl;

        switch (opcion) {
            case 1:
                listarRegistros();
                break;
            case 2:
                buscarRegistros();
                break;
            case 3:
                insertarRegistro();
                break;
            case 4:
                actualizarRegistro();
                break;
            case 5:
                borrarRegistro();
                break;
            case 6:
                std::cout << "Saliendo del programa..." << std::endl;
                #if defined(_WIN32) || defined(_WIN64)
                    system("pause");
                #endif
                    exit(0);
                break;
            case 7:
                guardarEnArchivo(base_de_datos);
                break;
            case 8:
                cargarDesdeArchivo(base_de_datos);
                break;
            default:
                std::cout << "Opción no válida:" << std::endl;
        }
    menu();
}
