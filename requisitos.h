#ifndef REQUISITOS_H
#define REQUISITOS_H

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
  Requisitos(string tipo){
    this->tipo = tipo;
    this->id = rand()%100000;
  }
  int getId() {return id;};
  void setId(int id){this->id = id;};
  string getTipo() {return tipo;};
  void setTipo(string tipo){this->tipo = tipo;}
};
#endif // REQUISITOS_H