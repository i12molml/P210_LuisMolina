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

        string getDni() {
            return dni;
        }

        void setDni(string dni) {
            this->dni = dni;
        }

        string getNombreCompleto() {
            return nombreCompleto;
        }

        void setNombreCompleto(string nombreCompleto) {
            this->nombreCompleto = nombreCompleto;
        }

        string getEmail() {
            return email;
        }

        void setEmail(string email) {
            this->email = email;
        }

        string getPassword() {
            return password;
        }

        void setPassword(string password) {
            this->password = password;
        }

        int getTelefono() {
            return telefono;
        }

        void setTelefono(int telefono) {
            this->telefono = telefono;
        }

        string getTipoUsuario() {
            return tipoUsuario;
        }

        void setTipoUsuario(string tipoUsuario) {
            this->tipoUsuario = tipoUsuario;
        }

        string getFechaNacimiento() {
            return fechaNacimiento;
        }

        void setFechaNacimiento(string fechaNacimiento) {
            this->fechaNacimiento = fechaNacimiento;
        }
};