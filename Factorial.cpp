#include <iostream> 
#include <stdlib.h>
using namespace std;
int main() {
    int n, i = 0, j, factorial;
    cout << "Ingrese el numero: ";
    cin >> n;
    while(i <= n){
        if(i == 0){
            factorial = 1; }
            else{
                factorial =1; 
                j = 1;
                while (j <= i) {
                    factorial *= j;
                    j++; }}
                    cout << "Factorial de "<<i<<": "<<factorial<<endl;
                    i++; }
                    return 0;
                }
