#include <iostream>
#include <string>
#include "Lista.h"
#include "Lista.cpp"
using namespace std;

class menu{
    public:
    string usuario;
    string contrasena;
    int opcion;
 menu(){
     Lista *pa = new Lista();
     pa->CrearLista();
     cout << "Seleccione el numero que corresponde a lo que desea hacer\n" <<endl;
     cout << "1. Ingresar nuevo usuario\n2.Buscar usuario\n3. Eliminar usuario\n4. Mostrar lista" <<endl;

    while(true){
      cin>>opcion;
      if(opcion == 0){
        break;
      }else if(opcion==1){
        int decidir;
        string user, pass;
        cout<<"Ingrese el nuevo usuario"<<endl;
        cin>>user;
        cout<<"Ingrese la nueva contraseña"<<endl;
        cin>>pass;
        cout << "Digite '1' si desea agregarlo al inicio o 0 para agregarlo al final" <<endl; 
        cin>>decidir;
        if(decidir=1){
        pa->intentoInsertar(user, pass);
        }else if(decidir == 0){
        pa->intentoInsertarFinal(user, pass);
        }
      }else if(opcion==2){
        string user, pass;
        cout<<"Ingrese usuario a buscar: "<<endl;
        cin>>user;
        cout<<"Ingrese contraseña del usuario a buscar: "<<endl;
        cin>>pass;
        pa->buscarLista(user, pass);
      }else if(opcion ==3){
         string user, pass;
        cout<<"Ingrese usuario a eliminar: "<<endl;
        cin>>user;
        cout<<"Ingrese contraseña del usuario a eliminar: "<<endl;
        cin>>pass;
        pa->eliminar(user, pass);
    }else if (opcion==4){
        pa->mostrarLista();
    }
    }
    
    
    
    
}
};
int main(){
   menu();
    return 0;
}