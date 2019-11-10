#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    int matrix;

    cout<<"Ingrese un numero: "<<endl;
    cin>>n;
    cout<<"Ingrese un numero: "<<endl;
    cin>>m;

    for(int i = 0; i < n; i++){ //controla filas
        for(int j = 0; j < m; j++){ //controla columnas
            matrix[i][j];
        }
    }
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout<<matrix[i][j] <<"|";
    }
    cout<<endl;
}
return 0;
}