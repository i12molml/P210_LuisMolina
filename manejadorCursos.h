#ifndef MANEJADORCURSOS_H
#define MANEJADORCURSOS_H

#include <vector>
#include "curso.h"

using namespace std;

class ManejadorCursos {
    private:
        vector<Curso> cursos;
    public:

        void setCursos(vector<Curso> cursos){this->cursos= cursos;}
        vector<Curso> getCursos(){return cursos;}
        bool addUserToCurso(string idCurso, Usuario usuario);
        bool existCurso(string id);
        bool addCurso(Curso curso);
        bool removeCurso(Curso curso);
        bool removeCurso(string id);
        bool modifyCurso(Curso cursoAntiguo, Curso cursoNuevo);
        Curso findCurso(string id);
        void printAll();
        void printAllNames();
        void printAllIn(string dni);
        
};

#endif // MANEJADORCURSOS_H
