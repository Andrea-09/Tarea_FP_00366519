#include <string.h>
#include <iostream>
using namespace std;
 
int main(){
int correo;
int contrasena;
int senal;
int m;

 cout<<"Ingrese el su correo electronico: "<<endl;
 cin>>correo;
 cout<<"Ingrese su contrasena: "<<endl;
 cin>>contrasena;

 switch(m){
     case 1: 
     cout<<"Ingrese el correo electronico correcto";
     break;

     case 2: 
     cout<<"La contrasena es invalida"<<endl;
     break;

     case 3: 
     cout<<"La contrasena y el correo son invalidos, por favor ingrese las credenciales correctas"<<endl;
     break;
 }

 switch(m){
     case 4: 
     cout<<"La conexion a internet es debil"<<endl;
     break;

     case 5:
     cout<<"Lo sentimos, pero su cuenta no existe"<<endl;
     break;
 }

return 0;
}
