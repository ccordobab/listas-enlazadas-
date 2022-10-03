#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

using namespace std;

class Lista{
private:
struct node{
int data;
node* next;
};
node* head;
node* current;
node* temporary;

public:
Lista();
void insertar(int val);
void eliminar(int val);
void imprimir();
void buscar(int val);
void mostrar(int pos);
void promedioPares();
void promedioImpares();
void mayor();
void menor();
void repetidos();

};


#endif