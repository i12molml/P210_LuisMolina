#include <string>
#include <iostream>
#include <vector>
#include "curso.h"
#include "manejadorCursos.h"
using namespace std;


void ManejadorCursos::printAllIn(string dni){
    bool atLeastOne = false;
    for(int i=0; i< cursos.size();i++){
      if(cursos[i].isUserIn(dni)){
        atLeastOne= true;
        cursos[i].printCurso();
        cout<<"-----"<<endl;
      }
  }
  if(! atLeastOne){cout<<"No esta matriculado en ninguno"<<endl;}
}

bool ManejadorCursos::addUserToCurso(string idCurso, Usuario usuario){
   for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == idCurso) {
        cursos[i].addParticipante(usuario);
        return true;
      }
    }
    return false;
}

void ManejadorCursos::printAll(){
  for(int i=0; i< cursos.size();i++){
    cursos[i].printCurso();
    cout<<"-----"<<endl;
  }
}

void ManejadorCursos::printAllNames(){
  for(int i=0; i< cursos.size();i++){
    cout<<cursos[i].getId()<<" "<<cursos[i].getNombre()<<endl;
  }
}

  bool ManejadorCursos::addCurso(Curso curso) {
    if(existCurso(curso.getId()))return false;
    this->cursos.push_back(curso);
    return true;
  }

  bool ManejadorCursos::existCurso(string id){
      for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == id) {
        return true;
      }
    }
    return false;
  }

  bool ManejadorCursos::removeCurso(Curso curso) {
    for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == curso.getId()) {
        cursos.erase(cursos.begin() + i);
        return true;
      }
    }
    return false;
  }

  bool ManejadorCursos::removeCurso(string id) {
    for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == id) {
        cursos.erase(cursos.begin() + i);
        return true;
      }
    }
    return false;
  }

  bool ManejadorCursos::modifyCurso(Curso cursoAntiguo, Curso cursoNuevo) {
    for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == cursoAntiguo.getId()) {
        cursos[i] = cursoNuevo;
        return true;
      }
    }
    return false;
  }

  Curso ManejadorCursos::findCurso(string id) {
    for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == id) {
        return cursos[i];
      }
    }
    return Curso("", "", 0, "", "", "");
  }

