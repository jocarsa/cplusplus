void listarRegistros(){
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
}

void buscarRegistros(){
    std::cout << "Búsqueda de registros" << std::endl;
                
    std::cout << "Búsqueda de registros" << std::endl;
    std::string peticion;
    std::cout << "Introduce el nombre a buscar:" << std::endl;
    std::cin >> peticion;

    bool encontrado = false;
    std::cout << "Resultados de la búsqueda:" << std::endl;
    for (const auto& contacto : base_de_datos) {
        if (contacto.nombre == peticion) {
            encontrado = true;
            std::cout << "Nombre: " << contacto.nombre << std::endl;
            std::cout << "Apellidos: " << contacto.apellidos << std::endl;
            std::cout << "Edad: " << contacto.edad << std::endl;
            std::cout << "Email: " << contacto.email << std::endl;
            std::cout << std::endl;
        }
    }
    if (!encontrado) {
        std::cout << "No se encontraron registros para el nombre proporcionado." << std::endl;
    }
                
}
void insertarRegistro(){
    std::cout << "Inserción de registros" << std::endl;
    std::cout << "Introduce un nuevo nombre:" << std::endl;
    Contacto contacto1;
    std::cin >> contacto1.nombre;
    std::cin >> contacto1.apellidos;
    std::cin >> contacto1.edad;
    std::cin >> contacto1.email;
    base_de_datos.push_back(contacto1);
}
void actualizarRegistro(){
     std::cout << "Actualización de registros" << std::endl;
    if (base_de_datos.empty()) {
        std::cout << "No hay registros para actualizar." << std::endl;
    } else {
        std::cout << "Introduce el nombre del registro que quieres actualizar:" << std::endl;
        std::string nombreActualizar;
        std::cin >> nombreActualizar;

        bool encontrado = false;
        for (auto& contacto : base_de_datos) {
            if (contacto.nombre == nombreActualizar) {
                encontrado = true;
                std::cout << "Introduce los nuevos datos para " << nombreActualizar << ":" << std::endl;
                std::cin >> contacto.nombre;
                std::cin >> contacto.apellidos;
                std::cin >> contacto.edad;
                std::cin >> contacto.email;
                std::cout << "Registro actualizado correctamente." << std::endl;
                break; // Exit loop once record is updated
            }
        }
        if (!encontrado) {
            std::cout << "No se encontró el registro especificado." << std::endl;
        }
    }
}

void borrarRegistro(){
    std::cout << "Eliminación de registros" << std::endl;
    std::string consulta;
    std::cout << "Introduce el nombre del registro a eliminar:" << std::endl;
    std::cin >> consulta;

    bool eliminado = false;
    auto it = base_de_datos.begin();
    while (it != base_de_datos.end()) {
        if (it->nombre == consulta) {
            it = base_de_datos.erase(it);
            eliminado = true;
        } else {
            ++it;
        }
    }
    if (eliminado) {
        std::cout << "Registro eliminado exitosamente." << std::endl;
    } else {
        std::cout << "No se encontró el registro con el nombre proporcionado." << std::endl;
    }
}

void guardarEnArchivo(const std::vector<Contacto>& base_de_datos) {
    std::ofstream archivo("base_de_datos.txt");
    if (archivo.is_open()) {
        for (const auto& contacto : base_de_datos) {
            archivo << contacto.nombre << " " << contacto.apellidos << " " << contacto.edad << " " << contacto.email << std::endl;
        }
        archivo.close();
        std::cout << "Registros guardados en base_de_datos.txt correctamente." << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo para escritura." << std::endl;
    }
}