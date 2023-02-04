#include <string>
#include <vector>
#include "usuario.h"
using namespace std;

class Curso {
private:
  string id;
  string nombre;
  int capacidad;
  string fechaDeInicio;
  string fechaDeFin;
  string horario;
  vector<string> requisitos;
  vector<string> recursos;
  vector<Usuario> participantes;

public:
  Curso(string id, string nombre, int capacidad, string fechaDeInicio, string fechaDeFin, string horario) {
    this->id = id;
    this->nombre = nombre;
    this->capacidad = capacidad;
    this->fechaDeInicio = fechaDeInicio;
    this->fechaDeFin = fechaDeFin;
    this->horario = horario;
  }

  void addRecurso(string recurso) {
    this->recursos.push_back(recurso);
  }

  void removeRecurso(string recurso) {
    for (int i = 0; i < recursos.size(); i++) {
      if (recursos[i] == recurso) {
        recursos.erase(recursos.begin() + i);
        break;
      }
    }
  }

  void modifyRecurso(string recursoAntiguo, string recursoNuevo) {
    for (int i = 0; i < recursos.size(); i++) {
      if (recursos[i] == recursoAntiguo) {
        recursos[i] = recursoNuevo;
        break;
      }
    }
  }
};