#include <cute.h>
void addCurso(){
	ManejadorCursos mCurso;
	Curso curso1("C001", "Programación en C++", 50, "2022-05-10", "2022-08-20", "Lunes y Miércoles de 18:00 a 21:00");
	mCurso.addCurso(curso1);
	ASSERT_EQUAL(true,mCurso.findCurso("C001"));
}
