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

Usuario registrar();

int main(){
    ManejadorCursos mCurso;
    ManejadorUsuarios mUsuario;
    /*
    Curso curso2("ad","hola",2,"20-12-12","21-12-12","L9:30,M10:30,J11:30");
    mCurso.addCurso(curso2);
    Curso curso = mCurso.getCursos()[0];
    curso.printCurso();
    */
   bool salir = true;
   int opcion= 0;
   while(salir){
    cout<<"Introduzca la opcion que quiera: "<<endl;
    menuInicial();
    cin>>opcion;
    if(opcion == 0){
        salir=true;
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
            Usuario usuario = mUsuario.findUsuario(email);
            if(usuario.getTipoUsuario()== "USUARIO"){
                while(salir){
                    menuUsuario();
                    cin>>opcion;
                }
            }else if(usuario.getTipoUsuario()== "ADMINISTRADOR"){
                while(salir){
                    menuAdmin();
                    cin>>opcion;
                }
            }else if (usuario.getTipoUsuario()== "ADMINISTADOR_CURSOS"){
                while(salir){
                    menuCursos();
                    cin>>opcion;
                }
            }
        };
    }
   }


    return 1;
}

void menuInicial(){
    cout<<"1.Registrarse"<<endl;
    cout<<"2.Iniciar Sesión"<<endl;
    cout<<"3.Salir"<<endl;
}
void menuUsuario(){cout<<"menu"<<endl;}
void menuAdmin(){cout<<"menu"<<endl;}
void menuCursos(){cout<<"menu"<<endl;}


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

/*
revisar
*/
Curso crear() {
    string id, nombre, horario;
    int capacidad;
    string fechaDeInicio, fechaDeFin;
    vector<Requisitos> requisitos;
    vector<string> recursos;

    cout << "Introduce el ID del curso: ";
    cin >> id;
    cout << "Introduce el nombre del curso: ";
    cin >> nombre;
    cout << "Introduce la capacidad del curso: ";
    cin >> capacidad;
    cout << "Introduce la fecha de inicio del curso (dd/mm/yyyy): ";
    cin >> fechaDeInicio;
    cout << "Introduce la fecha de fin del curso (dd/mm/yyyy): ";
    cin >> fechaDeFin;
    cout << "Introduce el horario del curso: ";
    cin >> horario;

    int numRequisitos;
    cout << "Introduce el número de requisitos del curso: ";
    cin >> numRequisitos;
    for (int i = 0; i < numRequisitos; i++) {
        cout << "Introduce el requisito " << i + 1 << ": ";
        string requisito;
        cin >> requisito;
        requisitos.push_back(Requisitos(requisito));
    }

    int numRecursos;
    cout << "Introduce el número de recursos del curso: ";
    cin >> numRecursos;
    for (int i = 0; i < numRecursos; i++) {
        cout << "Introduce el recurso " << i + 1 << ": ";
        string recurso;
        cin >> recurso;
        recursos.push_back(recurso);
    }
    return Curso(id, nombre, capacidad, fechaDeInicio, fechaDeFin, horario,recursos, requisitos);
}