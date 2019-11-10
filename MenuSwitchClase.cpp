#include <iostream>
using namespace std;

int main(){
    int m;

    cout<<"Eliga una opcion: ";
    cout<<"1 Desayuno\n";
    cout<<"2 Almuerzo\n";
    cout<<"3 Cena\n";
    cout<<"4 Postres\n";
    cout<<"5 Antojos\n";
    cout<<"6 Salir\n\n";
    cin>>m;

    switch(m){
case 1:
cout<<"Desayuno tipico"<<endl;
cout<<"Omelette"<<endl;
cout<<"Desayuno light"<<endl;
break;

case 2:
cout<<"Almuerzo carnivoro"<<endl;
cout<<"Almuerzo light"<<endl;
cout<<"Almuerzo vegetariano"<<endl;
break;

case 3:
cout<<"Cena de Huevo y Frijoles"<<endl;
cout<<"Cena light"<<endl;
cout<<"Cena de Sopas"<<endl;
break;

case 4:
cout<<"Postre Tres Leches"<<endl;
cout<<"Cheesecake"<<endl;
cout<<"Quesadilla y cafe"<<endl;
break;

case 5:
cout<<"Yuca Frita"<<endl;
cout<<"Empanada"<<endl;
cout<<"Nuegados"<<endl;
break;

case 6:
cout<<"Adios"<<endl;
break;
default: cout<<"El valor ingresado no esta en el menu"<<endl;
}

return 0;

}