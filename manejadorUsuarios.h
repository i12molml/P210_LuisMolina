#ifndef MANEJADORUSUARIOS_H
#define MANEJADORUSUARIOS_H

#include <vector>
#include "Usuario.h"

using namespace std;

class ManejadorUsuarios {
    private:
        vector<Usuario> usuarios;
    public:
        void setUsuarios(vector<Usuario> usuarios){this->usuarios = usuarios;}
        vector<Usuario> getUsuarios(){return usuarios;}

        bool addUsuario(Usuario usuario);
        bool removeUsuario(Usuario usuario);
        bool modifyUsuario(Usuario usuarioAntiguo, Usuario usuarioNuevo);
        Usuario findUsuario(string email);
        bool checkLogin(string email,string password);
};

#endif // MANEJADORUSUARIOS_H