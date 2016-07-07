/**
*	Nombre del programa: OrdenamientoParalelo
*	Autor: Marco Cupo
*	Fecha: 30/5/2016
**/
#include "libs.h"
#include "dtp.h"

#define		TOPEF 100000

#ifndef ARRAYS_H
#define ARRAYS_H
typedef int ty_vec[TOPEF];

void CargarVectorDesordenado(ty_vec &v);
void Burbujeo(ty_vec v2);
void BurbujeoParalelo(ty_vec v2);
void BurbujeoBidireccional(ty_vec v2);
void BurbujeoBidireccionalParalelo(ty_vec v2);
void Shell(ty_vec v2);
void ShellParalelo(ty_vec v2);
void InsertSort(ty_vec v2);
void InsertionSort(ty_vec v2);
void InsertionSortParalelo(ty_vec v2);
void Menu();
#endif