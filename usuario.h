#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using namespace std;

class Usuario {
    private:
        string dni;
        string nombreCompleto;
        string email;
        string password;
        int telefono;
        string tipoUsuario;
        string fechaNacimiento;
    public:
        Usuario(string dni, string nombreCompleto, string email, string password, int telefono, string tipoUsuario, string fechaNacimiento);
        string getDni();
        void setDni(string dni);
        string getNombreCompleto();
        void setNombreCompleto(string nombreCompleto);
        string getEmail();
        void setEmail(string email);
        string getPassword();
        void setPassword(string password);
        int getTelefono();
        void setTelefono(int telefono);
        string getTipoUsuario();
        void setTipoUsuario(string tipoUsuario);
        string getFechaNacimiento();
        void setFechaNacimiento(string fechaNacimiento);
};

#endif // USUARIO_H