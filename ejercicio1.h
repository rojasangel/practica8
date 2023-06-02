#define ARCHIVO_H
#define ARCHIVO_H

#include <stdio.h>

struct alumno {
   int matricula;
   char nombre[50];
   char direccion[50];
};

void capturarDatosDeAlumnos(FILE *fp);
void desplegarDatosDeAlumnos(FILE *fp);

