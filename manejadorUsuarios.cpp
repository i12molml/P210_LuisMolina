#include <string>
#include <vector>
#include "usuario.h"
#include "manejadorUsuarios.h"
using namespace std;

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

  Usuario ManejadorUsuarios::findUsuario(string dni) {
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getDni() == dni) {
        return usuarios[i];
      }
    }
    return Usuario("", "", "", "", 0, "", "");
  }

