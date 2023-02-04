#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <vector>
#include "curso.h"
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
        vector<string> participantes;
    public:
        Curso(string id, string nombre, int capacidad, string fechaDeInicio, string fechaDeFin, string horario);
        string getId();
        void setId(string id);
        string getNombre();
        void setNombre(string nombre);
        int getCapacidad();
        void setCapacidad(int capacidad);
        string getFechaDeInicio();
        void setFechaDeInicio(string fechaDeInicio);
        string getFechaDeFin();
        void setFechaDeFin(string fechaDeFin);
        string getHorario();
        void setHorario(string horario);
        vector<string> getRequisitos();
        void setRequisitos(vector<string> requisitos);
        vector<string> getRecursos();
        void setRecursos(vector<string> recursos);
        vector<string> getParticipantes();
        void setParticipantes(vector<string> participantes);
        void addRecurso();
        void removeRecurso();
        void modifyRecurso();
};

#endif // CURSO_H