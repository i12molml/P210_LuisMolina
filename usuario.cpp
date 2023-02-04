#include <string>
#include <iostream>
#include "usuario.h"

void Usuario::printUsuario(Usuario usuario) {
    cout << "DNI: " << usuario.getDni() << endl;
    cout << "Nombre completo: " << usuario.getNombreCompleto() << endl;
    cout << "Email: " << usuario.getEmail() << endl;
    cout << "Telefono: " << usuario.getTelefono() << endl;
    cout << "Tipo de usuario: " << usuario.getTipoUsuario() << endl;
    cout << "Fecha de nacimiento" << usuario.getFechaNacimiento()<<endl;
}