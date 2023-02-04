#include "usuario.h"
#include "curso.h"
#include "manejadorCursos.h"
#include "manejadorUsuarios.h"
#include "requisitos.h"

int main(){
    ManejadorCursos mCurso;
    ManejadorUsuarios mUsuario;
    Curso curso2("ad","hola",2,"20-12-12","21-12-12","L9:30,M10:30,J11:30");
    mCurso.addCurso(curso2);
    Curso curso = mCurso.getCursos()[0];
    curso.printCurso();
    return 1;
}