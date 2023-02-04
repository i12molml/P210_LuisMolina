#include <iostream>
#include "usuario.h"
#include "curso.h"
#include "manejadorCursos.h"
#include "manejadorUsuarios.h"
#include "requisitos.h"

void menuInicial();
void menuUsuario();
void menuAdmin();
void menuCursos();

Curso crear();
Usuario registrar();

int main(){
    
    ManejadorCursos mCurso;
        Curso curso1("C001", "Programación en C++", 50, "2022-05-10", "2022-08-20", "Lunes y Miércoles de 18:00 a 21:00");
        Curso curso2("C002", "Diseño Gráfico", 40, "2022-06-01", "2022-09-10", "Martes y Jueves de 16:00 a 19:00");
        Curso curso3("C003", "Bases de Datos", 30, "2022-05-15", "2022-08-05", "Lunes y Miércoles de 10:00 a 13:00");
        Curso curso4("C004", "Desarrollo Web", 60, "2022-07-01", "2022-10-01", "Martes y Jueves de 19:00 a 22:00");
        Curso curso5("C005", "Machine Learning", 45, "2022-06-10", "2022-09-20", "Lunes y Miércoles de 13:00 a 16:00");
        Curso curso6("C006", "Lógica de Programación", 35, "2022-05-20", "2022-08-10", "Martes y Jueves de 10:00 a 13:00");
        Curso curso7("C007", "Desarrollo de Videojuegos", 55, "2022-07-15", "2022-10-15", "Lunes y Miércoles de 16:00 a 19:00");
        Curso curso8("C008", "Robótica", 25, "2022-06-01", "2022-08-31", "Martes y Jueves de 19:00 a 22:00");
        Curso curso9("C009", "Realidad Virtual", 40, "2022-05-10", "2022-08-20", "Lunes y Miércoles de 10:00 a 13:00");
        Curso curso10("C0010", "Seguridad Informática", 45, "2022-07-01", "2022-10-01", "Martes y Jueves de 16:00 a 19:00");
        mCurso.addCurso(curso1);
        mCurso.addCurso(curso2);
        mCurso.addCurso(curso3);
        mCurso.addCurso(curso4);
        mCurso.addCurso(curso5);
        mCurso.addCurso(curso6);
        mCurso.addCurso(curso7);
        mCurso.addCurso(curso8);
        mCurso.addCurso(curso9);
        mCurso.addCurso(curso10);
    ManejadorUsuarios mUsuario;
        Usuario usuario1("123456789", "Juan Perez", "juanperez@gmail.com", "password1234", 123456789, "USUARIO", "01/01/2000");
        Usuario administrador1("987654321", "Ana Rodriguez", "anarodriguez@gmail.com", "password4321", 987654321, "ADMINISTRADOR", "02/02/2002");
        Usuario administradorCursos1("111111111", "Pedro Martinez", "pedromartinez@gmail.com", "password11111", 111111111, "ADMINISTRADOR_CURSOS", "03/03/2003");
        Usuario usuario2("222222222", "María Sánchez", "mariasanchez@gmail.com", "password22222", 222222222, "USUARIO", "04/04/2004");
        mUsuario.addUsuario(usuario1);
        mUsuario.addUsuario(administrador1);
        mUsuario.addUsuario(administradorCursos1);
        mUsuario.addUsuario(usuario2);

   bool continuar = true;
   int opcion= 0;
   while(continuar){
    cout<<"Introduzca la opcion que quiera: "<<endl;
    menuInicial();
    cin>>opcion;
    if(opcion == 3){
        continuar=false;
    }else if (opcion == 1){
        mUsuario.addUsuario(registrar());
        cout<<"Usuario registrado correctamente"<<endl;
    }else if (opcion == 2){
        string email,password;
        cout<<"Introduzca su email"<<endl;
        cin>>email;
        cout<<"Introduzca su password"<<endl;
        cin>>password;

        if(! mUsuario.checkLogin(email,password)){
            cout<<"Login no introducido correctamente"<<endl;
        }else{
                cout<<"Login correcto"<<endl;
            Usuario usuario = mUsuario.findUsuario(email);
            if(usuario.getTipoUsuario()== "USUARIO"){
                while(continuar){
                    menuUsuario();
                    cin>>opcion;
                    if(opcion ==1){
                        mCurso.printAll();
                    }else if(opcion ==2){
                        mCurso.printAllIn(usuario.getDni());
                    }else if(opcion==3){
                        string idCurso;
                        cout<<"Introduzca la id del curso al que quiere inscribirse"<<endl;
                        cin>>idCurso;
                        if(mCurso.addUserToCurso(idCurso,usuario)){
                            cout<<"Agregado correctamente"<<endl;
                        }else{cout<<"No se ha encontrado el curso"<<endl;}
                    }else if(opcion==4){
                        continuar= false;
                    }
                }
            }else if(usuario.getTipoUsuario()== "ADMINISTRADOR"){
                while(continuar){
                    menuAdmin();
                    cin>>opcion;
                    if(opcion == 1){
                        mCurso.printAll();
                    }else if(opcion == 2){
                        if(mCurso.addCurso(crear())){
                            cout<<"Creado correctamente"<<endl;
                        }else{cout<<"Ha habido un error en la creación del curso"<<endl;}
                    }else if(opcion == 3){
                        string idCurso;
                        mCurso.printAllNames();
                        cout<<"Introduzca la id del curso a borrar"<<endl;
                        cin>>idCurso;
                        if(mCurso.removeCurso(idCurso)){
                            cout<<"Curso borrado"<<endl;
                        }else{cout<<"Error al borrar el curso"<<endl;}
                    }else if(opcion==4){
                        mUsuario.printAll();
                    }else if(opcion==5){
                        continuar= false;
                    }
                }
            }else if (usuario.getTipoUsuario()== "ADMINISTRADOR_CURSOS"){
                while(continuar){
                    menuCursos();
                    cin>>opcion;
                    if(opcion == 1){
                        mCurso.printAll();
                    }else if(opcion == 2){
                        if(mCurso.addCurso(crear())){
                            cout<<"Creado correctamente"<<endl;
                        }else{cout<<"Ha habido un error en la creación del curso"<<endl;}
                    }else if(opcion == 3){
                        string idCurso;
                        mCurso.printAllNames();
                        cout<<"Introduzca la id del curso a borrar"<<endl;
                        cin>>idCurso;
                        if(mCurso.removeCurso(idCurso)){
                            cout<<"Curso borrado"<<endl;
                        }else{cout<<"Error al borrar el curso"<<endl;}
                    }else if(opcion==4){
                        continuar= false;
                    }
                }
            }else{
                cout<<"Error, no es ningun tipo valido"<<endl;
            }
        };
    }
   }
    return 1;
}

void menuInicial(){
    cout<<"Bienvenido"<<endl;
    cout<<"1.Registrarse"<<endl;
    cout<<"2.Iniciar Sesión"<<endl;
    cout<<"3.Salir"<<endl;
}
void menuUsuario(){
    cout<<"Menu de Usuario"<<endl;
    cout<<"1.ver todos los  Cursos"<<endl;
    cout<<"2.ver cursos donde estoy matriculado"<<endl;
    cout<<"3.inscribirse a un curso"<<endl;
    cout<<"4.Salir"<<endl;
}
void menuAdmin(){
    cout<<"Menu de Administrador"<<endl;
    cout<<"1.ver Cursos"<<endl;
    cout<<"2.nuevo Curso"<<endl;
    cout<<"3.eliminar Curso"<<endl;
    cout<<"4.Listar Usuarios"<<endl;
    cout<<"5.Salir"<<endl;
}
void menuCursos(){
    cout<<"Menu de Administrador de Cursos"<<endl;
    cout<<"1.ver Cursos"<<endl;
    cout<<"2.nuevo Curso"<<endl;
    cout<<"3.eliminar Curso"<<endl;
    cout<<"4.Salir"<<endl;
}


Usuario registrar(){
    Usuario usuario("", "", "", "", 0, "", "");
    string dni;
    string nombreCompleto;
    string email;
    string password;
    int telefono;
    string fechaNacimiento;
    
    cout << "Ingrese el DNI: "<<endl;
    cin >> dni;
    usuario.setDni(dni);

    cout << "Ingrese el nombre completo: "<<endl;
    cin >> nombreCompleto;
    usuario.setNombreCompleto(nombreCompleto);

    cout << "Ingrese el email: "<<endl;
    cin >> email;
    usuario.setEmail(email);

    cout << "Ingrese la contraseña: "<<endl;
    cin >> password;
    usuario.setPassword(password);

    cout << "Ingrese el teléfono: "<<endl;
    cin >> telefono;
    usuario.setTelefono(telefono);

    usuario.setTipoUsuario("USUARIO");

    cout << "Ingrese la fecha de nacimiento (DD/MM/YYYY): "<<endl;
    cin >> fechaNacimiento;
    usuario.setFechaNacimiento(fechaNacimiento);

    return usuario;
}

Curso crear() {
    string id, nombre, horario;
    int capacidad;
    string fechaDeInicio, fechaDeFin;
    vector<Requisitos> requisitos;
    vector<string> recursos;

    cout << "Introduce el ID del curso: ";
    cin >> id;
    cout << "Introduce el nombre del curso: ";
    cin.ignore();
    getline (cin,nombre);
    cout << "Introduce la capacidad del curso: ";
    cin >> capacidad;
    cout << "Introduce la fecha de inicio del curso (yyyy-mm-dd): ";
    cin >> fechaDeInicio;
    cout << "Introduce la fecha de fin del curso (yyyy-mm-dd): ";
    cin >> fechaDeFin;
    cout << "Introduce el horario del curso: ";
    cin.ignore();
    getline (cin,horario);
    int numRequisitos;
    cout << "Introduce el número de requisitos del curso: ";
    cin >> numRequisitos;
    cin.ignore();
    for (int i = 0; i < numRequisitos; i++) {
        cout << "Introduce el requisito " << i + 1 << ": ";
        string requisito;
        getline (cin,requisito);
        requisitos.push_back(Requisitos(requisito));
    }

    int numRecursos;
    cout << "Introduce el número de recursos del curso: ";
    cin >> numRecursos;
    cin.ignore();
    for (int i = 0; i < numRecursos; i++) {
        cout << "Introduce el recurso " << i + 1 << ": ";
        string recurso;
        getline (cin,recurso);
        recursos.push_back(recurso);
    }
    return Curso(id, nombre, capacidad, fechaDeInicio, fechaDeFin, horario,recursos, requisitos);
}