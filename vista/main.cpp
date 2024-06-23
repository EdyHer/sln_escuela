#include <iostream>
#include "estudiante.h"

using namespace std;

int main() {
    string codigo, nombres, apellidos, direccion, fecha_nacimiento, estado_civil;
    int telefono = 0, id_tipo_sangre = 0, id_estudiante = 0;

    cout << "Ingrese Codigo:";
    cin >> codigo;
    cin.ignore();
    cout << "Ingres Nombres:";
    getline(cin, nombres);
    cout << "Ingres Apellidos:";
    getline(cin, apellidos);
    cout << "Ingres Direccion:";
    getline(cin, direccion);
    cout << "Ingrese Telefono:";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Fecha Nacimiento:";
    getline(cin, fecha_nacimiento);
    cout << "Ingrese Tipo Sangre:";
    cin >> id_tipo_sangre;
    cin.ignore();
    cout << "Ingrese Estado Civil:";
    getline(cin, estado_civil);

    Estudiante e = Estudiante(nombres, apellidos, direccion, telefono, fecha_nacimiento, id_tipo_sangre, codigo, id_estudiante, estado_civil);
    e.crear();
    e.leer();

    // Actualizacion
    cout << "Ingrese el ID a modificar:";
    cin >> id_estudiante;
    cin.ignore();
    cout << "Ingrese Codigo:";
    cin >> codigo;
    cin.ignore();
    cout << "Ingres Nombres:";
    getline(cin, nombres);
    cout << "Ingres Apellidos:";
    getline(cin, apellidos);
    cout << "Ingres Direccion:";
    getline(cin, direccion);
    cout << "Ingrese Telefono:";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Fecha Nacimiento:";
    getline(cin, fecha_nacimiento);
    cout << "Ingrese Tipo Sangre:";
    cin >> id_tipo_sangre;
    cin.ignore();
    cout << "Ingrese Estado Civil:";
    getline(cin, estado_civil);

    e.setId_estudiante(id_estudiante);
    e.setCodigo(codigo);
    e.setNombres(nombres);
    e.setApellidos(apellidos);
    e.setDireccion(direccion);
    e.setTelefono(telefono);
    e.setFecha_Nacimiento(fecha_nacimiento);
    e.setId_Tipo_Sangre(id_tipo_sangre);
    e.setEstado_Civil(estado_civil);
    e.actualizar();
    e.leer();

    cout << "Ingrese el ID a Eliminar:";
    cin >> id_estudiante;
    e.setId_estudiante(id_estudiante);
    e.borrar();
    e.leer();

    return 0;
}

