#include <string>
#include <vector>
#include "curso.h"
using namespace std;


class ManejadorCursos {
private:
  vector<Curso> cursos;

public:
  void addCurso(Curso curso) {
    this->cursos.push_back(curso);
  }

  void removeCurso(Curso curso) {
    for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == curso.getId()) {
        cursos.erase(cursos.begin() + i);
        break;
      }
    }
  }

  void modifyCurso(Curso cursoAntiguo, Curso cursoNuevo) {
    for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == cursoAntiguo.getId()) {
        cursos[i] = cursoNuevo;
        break;
      }
    }
  }

  Curso findCurso(string id) {
    for (int i = 0; i < cursos.size(); i++) {
      if (cursos[i].getId() == id) {
        return cursos[i];
      }
    }
    return Curso("", "", 0, "", "", "");
  }
};
