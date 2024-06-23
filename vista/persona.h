#pragma once
#include <iostream>
using namespace std;
class persona{
protected: string nombres, apellidos, direccion, fecha_nacimiento,estado_civil;
		 int telefono = 0, id_tipo_sangre = 0;
protected:
	persona() {}
	persona(string nom, string ape, string dir, int tel, string fn, int id_ts,string ec) {
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
		id_tipo_sangre = id_ts;
		estado_civil = ec;
		
	}
};

