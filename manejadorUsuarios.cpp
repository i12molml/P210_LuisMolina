#include <string>
#include <vector>
#include "usuario.h"
using namespace std;


class ManejadorUsuarios {
private:
  vector<Usuario> usuarios;

public:
  void addUsuario(Usuario usuario) {
    this->usuarios.push_back(usuario);
  }

  void removeUsuario(Usuario usuario) {
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getDni() == usuario.getDni()) {
        usuarios.erase(usuarios.begin() + i);
        break;
      }
    }
  }

  void modifyUsuario(Usuario usuarioAntiguo, Usuario usuarioNuevo) {
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getDni() == usuarioAntiguo.getDni()) {
        usuarios[i] = usuarioNuevo;
        break;
      }
    }
  }

  Usuario findUsuario(string dni) {
    for (int i = 0; i < usuarios.size(); i++) {
      if (usuarios[i].getDni() == dni) {
        return usuarios[i];
      }
    }
    return Usuario("", "", "", "", 0, "", "");
  }
};
