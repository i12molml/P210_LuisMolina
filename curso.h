#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <vector>
#include "usuario.h"
#include "requisitos.h"
using namespace std;

class Curso {
    private:
        string id;
        string nombre;
        int capacidad;
        string fechaDeInicio;
        string fechaDeFin;
        string horario;
        vector<Requisitos> requisitos;
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
    string getId() const { return id; }
    string getNombre() const { return nombre; }
    int getCapacidad() const { return capacidad; }
    string getFechaDeInicio() const { return fechaDeInicio; }
    string getFechaDeFin() const { return fechaDeFin; }
    string getHorario() const { return horario; }
    vector<Requisitos> getRequisitos() const { return requisitos; }
    vector<string> getRecursos() const { return recursos; }
    vector<Usuario> getParticipantes() const { return participantes; }

    void setId(string id) { this->id = id; }
    void setNombre(string nombre) { this->nombre = nombre; }
    void setCapacidad(int capacidad) { this->capacidad = capacidad; }
    void setFechaDeInicio(string fechaDeInicio) { this->fechaDeInicio = fechaDeInicio; }
    void setFechaDeFin(string fechaDeFin) { this->fechaDeFin = fechaDeFin; }
    void setHorario(string horario) { this->horario = horario; }
    void setRequisitos(vector<Requisitos> requisitos) { this->requisitos = requisitos; }
    void setRecursos(vector<string> recursos) { this->recursos = recursos; }
    void setParticipantes(vector<Usuario> participantes) { this->participantes = participantes; }


    bool addRecurso(string recurso);
    bool removeRecurso(string recurso);
    bool modifyRecurso(string recursoAntiguo, string recursoNuevo);
    void printCurso();
};

#endif // CURSO_H