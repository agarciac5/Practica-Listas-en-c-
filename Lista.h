#ifndef LIS_LISTA_H
#define LIS_LISTA_H
#include "Nodo.h"
#include <string>
#include <iostream>
using namespace std;

class Lista{
    protected:
    Nodo *Cabeza;
    
    public:
    
    void CrearLista();
    void mostrarLista();
    void mostrarLista2();
    void intentoInsertar(string dato1, string dato2);
    void intentoInsertarFinal(string dato1, string dato2);
    void sobreescribir();
   void eliminar(string dato1, string dato2);
   
    //DECLARACION MOMENTO2
    void insertarUsuarioPrincipio(string dato1, string dato2);
void insertarUsuarioFinal(string dato1, string dato2);
Nodo *final();
Nodo *ultimo();
Nodo *buscarLista(string destino, string destino2);

void insertarLista(Nodo *anterior, string dato1, string dato2);
};
#endif