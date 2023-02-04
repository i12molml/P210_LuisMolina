#include <string>
#include <vector>
#include "curso.h"
#include "manejadorCursos.h"
using namespace std;



  bool ManejadorCursos::addCurso(Curso curso) {
    this->cursos.push_back(curso);
    return true;
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

