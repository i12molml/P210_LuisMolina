#include <cute.h>
#include <iostream>
#include "usuario.h"
#include "curso.h"
#include "manejadorCursos.h"
#include "manejadorUsuarios.h"
#include "requisitos.h"


void removeCurso(){
	ManejadorCursos mCurso;
	Curso curso1("C001", "Programación en C++", 50, "2022-05-10", "2022-08-20", "Lunes y Miércoles de 18:00 a 21:00");
	mCurso.addCurso(curso1);
	mCurso.removeCurso("C001");
	ASSERT_EQUAL(false,mCurso.findCurso("C001"));
}
