#include <iostream>
#include <string>
#include "Lista.h"
#include <fstream>
using namespace std;

void Lista::Lista::CrearLista(){
    string linea1;
    string linea2;
     Cabeza = NULL;
     Nodo *p;
     p= Cabeza;//era Nodo *p = Cabeza;
    cout<<"FUNCIONA 2"<<endl;
    if(Cabeza==NULL){
cout<<"CABEZA LISTA"<<endl;
    }
    
    if(p==NULL){
        cout<<"No carga"<<endl;
    }
   cout<<"creando lista..."<<endl;
    string nombreArchivo = "usuarios.txt";
    ifstream archivo;
    archivo.open("usuarios.txt", ios::in);
    if (archivo.fail()){
        cout<<"Falló al abrir el archivo";
    }

    while (!archivo.eof()){
         linea1;
         linea2;
        getline(archivo, linea1);
        cout<< "Linea actual: " << linea1<< endl;
        getline(archivo, linea2);
        cout<< "Linea actual: " << linea2 << endl;
         Cabeza= new Nodo(linea1, linea2, Cabeza);
      p = Cabeza->enlaceNodo();
     
    }
}
void Lista::intentoInsertar(string dato1, string dato2){
    
    Cabeza= new Nodo(dato1, dato2, Cabeza);
    sobreescribir();
}
Nodo *Lista::ultimo() {
    Nodo *p = Cabeza;
    if (p == NULL) throw "Error, lista vacía";
    while (p->enlaceNodo() != NULL) p = p->enlaceNodo();
    return p;
}
void Lista::intentoInsertarFinal(string dato1, string dato2){
    cout<<"PRUEBA1"<<endl;
    Nodo *ultimo = this->ultimo();
    sobreescribir();
   
    cout<<"PRUEBA2"<<endl;
    ultimo->ponerEnlace(new Nodo(dato1, dato2));
    cout<<"PRUEBA3"<<endl;
}
void Lista::mostrarLista(){
    Nodo *p = Cabeza;
    if(p==NULL){
        cout<<"No carga"<<endl;
    }
    else{
        while (p != NULL) {
            cout << p->datoNodo1() << endl;
            cout<<p->datoNodo2()<<endl;
            p = p->enlaceNodo();

        }
    }
  
}
Nodo *Lista::buscarLista(string destino, string destino2){
     Nodo *indice;
     int flag=0;
    for (indice = Cabeza; indice != NULL; indice = indice->enlaceNodo()){
        if (destino == indice->datoNodo1() && destino2 == indice->datoNodo2()){
            flag=1;;
      
        }
        }
            if(flag==1){
                cout<<"Bienvenido"<<endl;
            }
            else{
                cout<<"ACCESO DENEGADO"<<endl;
            }

    return NULL;

}
void Lista::eliminar(string dato1, string dato2){
    Nodo *actual, *anterior;
    bool encontrado;
    actual = Cabeza;
    anterior = NULL;
    encontrado = false;
    // búsqueda del nodo y del anterior
    while ((actual != NULL) && !encontrado) {
        encontrado = (actual->datoNodo1() == dato1 && actual->datoNodo2() == dato2);
        if (!encontrado) {
            anterior = actual;
            actual = actual->enlaceNodo();
        }
    }
    // enlace del nodo anterior con el siguiente
    if (actual != NULL) {
        // distingue entre cabecera y resto de la lista
        if (actual == Cabeza) {
            Cabeza = actual->enlaceNodo();
        } else {
            anterior->ponerEnlace(actual->enlaceNodo());
        }
        delete actual;
    }
}
void Lista::sobreescribir(){
    Nodo *p = Cabeza;
    ofstream archivo;
    archivo.open("usuarios.txt", ios::out);
    if (archivo.fail()){
        cout<<"Falló al abrir el archivo";
    }
    if(p==NULL){
        cout<<"No carga"<<endl;
    }else{
        while (p != NULL){
    archivo<<p->datoNodo1()<<endl;
    archivo<<p->datoNodo2()<<endl;
    p = p->enlaceNodo();
    
    }}
    archivo.close();
   
}
// ofstream archivo;
//             archivo.open("usuarios.txt", ios::out);
//             if(archivo.fail()){
//                 cout<<"no se pudo abrir el archivo";
//                 exit(1);
//             }
//             archivo<<p->datoNodo1()<<endl;
//             archivo<<p->datoNodo2()<<endl;
//             archivo.close();

// }
//UN PROBABLE ELIMINAR LISTA
// void Lista::mostrarLista(){
//     Nodo *p = Cabeza;
//     if(p==NULL){
//         cout<<"No carga"<<endl;
//     }
//     else{
//         while (p != NULL) {
//             cout << p->datoNodo1() << endl;
//             cout<<p->datoNodo2()<<endl;
//             ofstream archivo;
//             archivo.open("usuarios.txt", ios::out);
//             if(archivo.fail()){
//                 cout<<"no se pudo abrir el archivo";
//                 exit(1);
//             }
//             archivo<<p->datoNodo1()<<endl;
//             archivo<<p->datoNodo2()<<endl;
//             archivo.close();


//             p = p->enlaceNodo();

//         }
//     }
// }

//DEFINICION MOMENTO2
void Lista::insertarUsuarioPrincipio(string dato1, string dato2){
    Nodo *nuevo;
    nuevo = new Nodo(dato1, dato2);
    cout<<"INSERTADO A LISTA"<<endl;
    nuevo->ponerEnlace(Cabeza);
}
void Lista::insertarUsuarioFinal(string dato1, string dato2){
    Nodo *final = this->final();
    final->ponerEnlace(new Nodo(dato1, dato2));
}
Nodo *Lista::final(){
    Nodo *p = Cabeza;
    if (p == NULL) throw "Error, lista vacía";
    while (p->enlaceNodo() != NULL) p = p->enlaceNodo();
    return p;
}
void Lista::mostrarLista2(){
    Nodo *p = Cabeza;
    if(p==NULL){
        cout<<"No carga"<<endl;
    }
    else{
        while (p != NULL) {
            cout << p->datoNodo1() << endl;
            cout<<p->datoNodo2()<<endl;
            p = p->enlaceNodo();

        }
    }
}
// void Lista::insertarLista(Nodo *anterior, string dato1, string dato2) {
//     Nodo *nuevo;
//     nuevo = new Nodo(dato1, dato2);
//     nuevo->ponerEnlace(anterior->enlaceNodo());
//     anterior->ponerEnlace(nuevo);
// }