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
        Usuario(string dni, string nombreCompleto, string email, string password, int telefono, string tipoUsuario, string fechaNacimiento) {
        this->dni = dni;
        this->nombreCompleto = nombreCompleto;
        this->email = email;
        this->password = password;
        this->telefono = telefono;
        this->tipoUsuario = tipoUsuario;
        this->fechaNacimiento = fechaNacimiento;
        }

        string getDni() {return dni;}
        string getNombreCompleto() {return nombreCompleto;}
        string getEmail() {return email;}
        string getPassword() {return password;}
        int getTelefono() {return telefono;}
        string getTipoUsuario() {return tipoUsuario;}
        string getFechaNacimiento() {return fechaNacimiento;}

        void setDni(string dni) {this->dni = dni;}
        void setNombreCompleto(string nombreCompleto) {this->nombreCompleto = nombreCompleto;}
        void setEmail(string email) {this->email = email;}
        void setPassword(string password) {this->password = password;}
        void setTelefono(int telefono) {this->telefono = telefono;}
        void setTipoUsuario(string tipoUsuario) {this->tipoUsuario = tipoUsuario;}
        void setFechaNacimiento(string fechaNacimiento) {this->fechaNacimiento = fechaNacimiento;}

        void printUsuario(Usuario usuario);
};

#endif // USUARIO_H