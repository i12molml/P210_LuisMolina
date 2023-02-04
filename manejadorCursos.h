#ifndef MANEJADORCURSOS_H
#define MANEJADORCURSOS_H

#include <vector>
#include "Curso.h"

using namespace std;

class ManejadorCursos {
    private:
        vector<Curso> cursos;
    public:

        void setCursos(vector<Curso> cursos){this->cursos= cursos;}
        vector<Curso> getCursos(){return cursos;}

        bool addCurso(Curso curso);
        bool removeCurso(Curso curso);
        bool modifyCurso(Curso cursoAntiguo, Curso cursoNuevo);
        Curso findCurso(string id);
};

#endif // MANEJADORCURSOS_H