#include <string>

class Contacto {
public:
    std::string getNombre() const {
        return nombre;
    }

    void setNombre(const std::string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    std::string getApellidos() const {
        return apellidos;
    }

    void setApellidos(const std::string& nuevosApellidos) {
        apellidos = nuevosApellidos;
    }

    std::string getEdad() const {
        return edad;
    }

    void setEdad(const std::string& nuevaEdad) {
        edad = nuevaEdad;
    }

    std::string getEmail() const {
        return email;
    }

    void setEmail(const std::string& nuevoEmail) {
        email = nuevoEmail;
    }

private:
    std::string nombre;
    std::string apellidos;
    std::string edad;
    std::string email;
};
