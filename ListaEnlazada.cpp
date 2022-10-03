#include <cstdlib>
#include <iostream>
#include "listaEnlazada.h"

using namespace std;


Lista::Lista(){
  head = NULL;
  current = NULL;
  temporary= NULL;
}

void Lista:: insertar(int val){
  node* n = new node;
  n->next = NULL;
  n->data = val;

  if(head != NULL){
    current = head;
    while(current->next != NULL){
      current = current->next;
    }
    current->next = n;
  }
  else{
    head = n;
  }
}

void Lista:: eliminar(int val){
  node* conVal = NULL;
  current = head;
  temporary = head;
  while(current->data != val  && current != NULL){
    temporary = current;
    current = current->next;
  }
  if(current!=NULL){
    temporary->next = current->next;
    current->next = NULL;
  }
}


void Lista:: imprimir(){
  current = head;
  while(current != NULL){
    std::cout<<current->data<<endl;
    current = current->next;
  }
  std::cout<<endl;
}


void Lista:: buscar(int val){
  current = head;
  int cont = 0;
  while(current != NULL  && current->data != val){
    cont++;
    current=current->next;
  }
  if(current!=NULL){
    std::cout<<"el valor "<<val<<" se encuentra en la posicion "<< cont<< " contando desde la posicion 0"<<endl;
    }
  else{
    std::cout<<"no se encuentra"<<endl;
  }
  std::cout<<endl;
}


void Lista:: mostrar(int pos){
  current = head;
  int cont = 0;
  while(current!=NULL  && cont !=pos){
    cont++;
    current = current->next;
  }
  if(current!=NULL){
    std::cout<<"en la posicion "<<pos<<" se encuentra el valor "<<current->data<<endl;
  }
  else{
    std::cout<<"el tamaño de la lista no es tan grande";
  }
  std::cout<<endl;
}



void Lista:: promedioPares(){
  current = head;
  int cont = 0;
  int acum = 0;
  while(current != NULL){
    if(current->data %2==0){
      cont++;
      acum = acum + current->data;
    }
    current = current->next;
  }
  float promedio = acum/cont;
  std::cout<<"el promedio de la suma de los numero pares es "<<promedio<<endl;
  std::cout<<endl;
}



void Lista:: promedioImpares(){
  current = head;
  int cont = 0;
  int acum = 0;
  while(current != NULL){
    if(current->data %2 !=0){
      cont++;
      acum = acum + current->data;
    }
    current = current->next;
  }
  float promedio = acum/cont;
  std::cout<<"el promedio de la suma de los numero impares es "<<promedio<<endl;
  std::cout<<endl;
}


void Lista:: mayor(){
  current = head;
  int mayo = current->data;
  while(current != NULL){
    if(current->data >  mayo){
      mayo = current->data;
    }
    current = current->next;
  }
  std::cout<<"el numero mas grande dentro de la lista es "<<mayo<<endl;
  std::cout<<endl;
}


void Lista:: menor(){
  current = head;
  int menr = current->data;
  while(current != NULL){
    if(current->data <  menr){
      menr = current->data;
    }
    current = current->next;
  }
  std::cout<<"el numero mas grande dentro de la lista es "<<menr<<endl;
  std::cout<<endl;
}


void Lista:: repetidos(){
  current = head;
  while(current != NULL){
    temporary = head;
    int cont = 0;
    while(temporary != NULL){
      if(temporary->data == current->data){
        cont++;
        if(cont>1){
          std::cout<<"este valor esta repetido "<<temporary->data<<endl;
        }
      }
      temporary = temporary->next;
    }
    current = current->next;
  }
}