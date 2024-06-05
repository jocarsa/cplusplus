#include <fstream>
#include <sstream>
void listarRegistros() {
    std::cout << "Listado de registros" << std::endl;
    if (base_de_datos.empty()) {
        std::cout << "No hay registros en la base de datos." << std::endl;
    } else {
        std::cout << "Registros:" << std::endl;
        for (const auto& contacto : base_de_datos) {
            std::cout << "Nombre: " << contacto.getNombre() << std::endl;
            std::cout << "Apellidos: " << contacto.getApellidos() << std::endl;
            std::cout << "Edad: " << contacto.getEdad() << std::endl;
            std::cout << "Email: " << contacto.getEmail() << std::endl;
            std::cout << std::endl;
        }
    }
}

void buscarRegistros() {
    std::cout << "Búsqueda de registros" << std::endl;
    std::cout << "Introduce el nombre a buscar:" << std::endl;
    std::string peticion;
    std::cin >> peticion;

    bool encontrado = false;
    std::cout << "Resultados de la búsqueda:" << std::endl;
    for (const auto& contacto : base_de_datos) {
        if (contacto.getNombre() == peticion) {
            encontrado = true;
            std::cout << "Nombre: " << contacto.getNombre() << std::endl;
            std::cout << "Apellidos: " << contacto.getApellidos() << std::endl;
            std::cout << "Edad: " << contacto.getEdad() << std::endl;
            std::cout << "Email: " << contacto.getEmail() << std::endl;
            std::cout << std::endl;
        }
    }
    if (!encontrado) {
        std::cout << "No se encontraron registros para el nombre proporcionado." << std::endl;
    }
}

void insertarRegistro() {
    std::cout << "Inserción de registros" << std::endl;
    
    Contacto nuevoContacto;
    std::string nombre, apellidos, edad, email;
    std::cout << "Introduce un nuevo nombre:" << std::endl;
    std::cin >> nombre;
    std::cout << "Introduce sus apellidos:" << std::endl;
    std::cin >> apellidos;
    std::cout << "Introduce su edad:" << std::endl;
    std::cin >> edad;
    std::cout << "Introduce su email:" << std::endl;
    std::cin >> email;
    nuevoContacto.setNombre(nombre);
    nuevoContacto.setApellidos(apellidos);
    nuevoContacto.setEdad(edad);
    nuevoContacto.setEmail(email);
    base_de_datos.push_back(nuevoContacto);
}

void actualizarRegistro() {
    std::cout << "Actualización de registros" << std::endl;
    if (base_de_datos.empty()) {
        std::cout << "No hay registros para actualizar." << std::endl;
    } else {
        std::cout << "Introduce el nombre del registro que quieres actualizar:" << std::endl;
        std::string nombreActualizar;
        std::cin >> nombreActualizar;

        bool encontrado = false;
        for (auto& contacto : base_de_datos) {
            if (contacto.getNombre() == nombreActualizar) {
                encontrado = true;
                std::cout << "Introduce los nuevos datos para " << nombreActualizar << ":" << std::endl;
                std::string nombre, apellidos, edad, email;
                std::cin >> nombre >> apellidos >> edad >> email;
                contacto.setNombre(nombre);
                contacto.setApellidos(apellidos);
                contacto.setEdad(edad);
                contacto.setEmail(email);
                std::cout << "Registro actualizado correctamente." << std::endl;
                break; // Exit loop once record is updated
            }
        }
        if (!encontrado) {
            std::cout << "No se encontró el registro especificado." << std::endl;
        }
    }
}

void borrarRegistro() {
    std::cout << "Eliminación de registros" << std::endl;
    std::string consulta;
    std::cout << "Introduce el nombre del registro a eliminar:" << std::endl;
    std::cin >> consulta;

    bool eliminado = false;
    auto it = base_de_datos.begin();
    while (it != base_de_datos.end()) {
        if (it->getNombre() == consulta) {
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

void guardarCSV(const std::string& filePath, const std::vector<Contacto>& base_de_datos) {
    std::ofstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error al abrir: " << filePath << std::endl;
        return;
    }
    file << "Nombre,Telefono,Email\n";
    for (const auto& contacto : base_de_datos) {
        file << contacto.getNombre() << "," << contacto.getApellidos() << "," << contacto.getEdad() << "," << contacto.getEmail() << "\n";
    }
    file.close();
}
void cargarCSV(const std::string& filePath, std::vector<Contacto>& base_de_datos) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error al abrir: " << filePath << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::istringstream sstream(line);
        std::string campo;
        std::vector<std::string> campos;

        while (std::getline(sstream, campo, ',')) {
            campos.push_back(campo);
        }

        if (campos.size() >= 4) { 
            Contacto nuevoContacto;
            nuevoContacto.setNombre(campos[0]);
            nuevoContacto.setApellidos(campos[1]);
            nuevoContacto.setEdad(campos[2]); 
            nuevoContacto.setEmail(campos[3]);
            base_de_datos.push_back(nuevoContacto);
        }
    }

    file.close();
}