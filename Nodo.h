#ifndef LIS_NODO_H
#define LIS_NODO_H
#include <iostream>
#include <string>

using namespace std;

class Nodo {
    protected:
        string dato1;
        string dato2;
        Nodo *enlace;//Enlace barra siguiente
        public:
         Nodo(string p, string h, Nodo* n) // crea el nodo y lo enlaza a n
    {
        
        dato1 = p;
        dato2 = h;
        enlace = n;
    }
      Nodo(string p, string h) // crea el nodo y lo enlaza a n
    {
        
        dato1 = p;
        dato2 = h;
        enlace = 0;
    }
     string datoNodo1( ) const
    {
        return dato1;
    }
    string datoNodo2( ) const
    {
        return dato2;
    }
    
    Nodo *enlaceNodo( ) const
    {
        return enlace;
    }
    void ponerEnlace(Nodo* siguiente)
    {
        enlace = siguiente;
    }
};
      
#endif