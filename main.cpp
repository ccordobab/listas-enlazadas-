#include <iostream>
#include "listaEnlazada.h"
using namespace std;

int main() {
  Lista list;
  list.insertar(6);
  list.insertar(8);
  list.insertar(11);
  list.insertar(8);
  list.insertar(20);
  list.insertar(30);
  list.insertar(40);
  list.imprimir();
  list.buscar(8);
  list.mostrar(2);
  list.promedioPares();
  list.promedioImpares();
  list.mayor();
  list.menor();
  list.repetidos();
}