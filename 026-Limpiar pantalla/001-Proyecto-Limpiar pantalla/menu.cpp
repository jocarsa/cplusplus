
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
                limpiarPantalla();
                listarRegistros();
                pulsaParaContinuar();
                break;
            case 2:
                limpiarPantalla();
                buscarRegistros();
                pulsaParaContinuar();
                break;
            case 3:
                limpiarPantalla();
                insertarRegistro();
                pulsaParaContinuar();
                break;
            case 4:
                limpiarPantalla();
                actualizarRegistro();
                pulsaParaContinuar();
                break;
            case 5:
                limpiarPantalla();
                borrarRegistro();
                pulsaParaContinuar();
                break;
            case 6:
                limpiarPantalla();
                std::cout << "Saliendo del programa..." << std::endl;
                #if defined(_WIN32) || defined(_WIN64)
                    system("pause");
                #endif
                    exit(0);
                break;
            case 7:
                limpiarPantalla();
                guardarCSV(ruta, base_de_datos);
                pulsaParaContinuar();
                break;
            case 8:
                limpiarPantalla();
                cargarCSV(ruta, base_de_datos);
                pulsaParaContinuar();
                break;
            default:
                std::cout << "Opción no válida:" << std::endl;
        }
    menu();
}
