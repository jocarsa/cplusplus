void bienvenida(){
    // Mensajes de bienvenida
    std::cout << NOMBRE_PROGRAMA << std::endl;
    std::cout << version << " " << autor << std::endl;
    /* Atrapamos la entrada de usuario
    y paramos la ejecución */
    std::cout << "Pulsa una tecla para continuar..." << std::endl;
    std::cin.get();
}
