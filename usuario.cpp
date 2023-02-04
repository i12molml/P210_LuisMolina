#include <string>
#include <iostream>
#include "usuario.h"

void Usuario::printUsuario() {
    cout << "DNI: " << getDni() << endl;
    cout << "Nombre completo: " << getNombreCompleto() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Telefono: " << getTelefono() << endl;
    cout << "Tipo de usuario: " << getTipoUsuario() << endl;
    cout << "Fecha de nacimiento: " << getFechaNacimiento()<<endl;
}