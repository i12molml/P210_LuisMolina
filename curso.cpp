#include <string>
#include <vector>
#include <iostream>
#include "usuario.h"
#include "requisitos.h"
#include "curso.h"
using namespace std;


bool Curso::isUserIn(string dni){
  for(int i=0; i<participantes.size(); i++){
    if(dni == participantes[i].getDni()){
      return true;
    }
  }
  return false;
}

bool Curso::addRecurso(string recurso) {
    this->recursos.push_back(recurso);
    return true;
  }

  bool Curso::removeRecurso(string recurso) {
    for (int i = 0; i < recursos.size(); i++) {
      if (recursos[i] == recurso) {
        recursos.erase(recursos.begin() + i);
        return true;
      }
    }
    return false;
  }

  bool Curso::modifyRecurso(string recursoAntiguo, string recursoNuevo) {
    for (int i = 0; i < recursos.size(); i++) {
      if (recursos[i] == recursoAntiguo) {
        recursos[i] = recursoNuevo;
        return true;
      }
    }
    return false;
  }

void Curso::printCurso() {
    cout << "ID: " << getId() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Capacidad: " << getCapacidad() << endl;
    cout << "Fecha de inicio: " << getFechaDeInicio() << endl;
    cout << "Fecha de fin: " << getFechaDeFin() << endl;
    cout << "Horario: " << getHorario() << endl;
    cout << "Requisitos: " << endl;
    vector<Requisitos> requisitos = getRequisitos();
    for (int i = 0; i < requisitos.size(); i++) {
        cout << "\tID: " << requisitos[i].getId() << endl;
        cout << "\tTipo: " << requisitos[i].getTipo() << endl;
    }
    cout << "Recursos: " << endl;
    vector<string> recursos = getRecursos();
    for (int i = 0; i < recursos.size(); i++) {
        cout << "\t" << recursos[i] << endl;
    }
    cout << "Participantes: " << endl;
    vector<Usuario> participantes = getParticipantes();
    for (int i = 0; i < participantes.size(); i++) {
        cout << "\tDNI: " << participantes[i].getDni() << endl;
        cout << "\tNombre completo: " << participantes[i].getNombreCompleto() << endl;
        cout << "\tEmail: " << participantes[i].getEmail() << endl;
        cout << "\tTelefono: " << participantes[i].getTelefono() << endl;
        cout << "\tTipo de usuario: " << participantes[i].getTipoUsuario() << endl;
        cout << "\tFecha de nacimiento: " << participantes[i].getFechaNacimiento() << endl;
    }
}
