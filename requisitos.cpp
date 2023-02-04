#include <string>
using namespace std;

class Requisitos {
private:
  int id;
  string tipo;

public:
  Requisitos(int id, string tipo) {
    this->id = id;
    this->tipo = tipo;
  }

  int getId() {
      return id;
  }

  void setID(int id) {
      this->id = id;
  }

  string getTipo() {
      return tipo;
  }

  void setTipo(string tipo) {
      this->tipo = tipo;
  }

};