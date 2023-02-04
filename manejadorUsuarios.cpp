#include <string>
#include <vector>
#include <iostream>
#include "usuario.h"
#include "manejadorUsuarios.h"
using namespace std;

  void ManejadorUsuarios::printAll(){
    for(int i=0; i< usuarios.size();i++){
    usuarios[i].printUsuario();
    cout<<"-----"<<endl;
  }
  }

  bool ManejadorUsuarios::addUsuario(Usuario usuario) {
    this->usuarios.push_back(usuario);
    return true;
  }

  bool ManejadorUsuarios::removeUsuario(Usuario usuario) {
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getDni() == usuario.getDni()) {
        usuarios.erase(usuarios.begin() + i);
        return true;
      }
    }
    return false;
  }

  bool ManejadorUsuarios::modifyUsuario(Usuario usuarioAntiguo, Usuario usuarioNuevo) {
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getDni() == usuarioAntiguo.getDni()) {
        usuarios[i] = usuarioNuevo;
        return true;
      }
    }
    return false;
  }

  Usuario ManejadorUsuarios::findUsuario(string email) {
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getEmail() == email) {
        return usuarios[i];
      }
    }
    return Usuario("", "", "", "", 0, "", "");
  }

  bool ManejadorUsuarios::checkLogin(string email,string password){
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getEmail() == email) {
        return (usuarios[i].getPassword()==password);
      }
    }
    return false;
  }