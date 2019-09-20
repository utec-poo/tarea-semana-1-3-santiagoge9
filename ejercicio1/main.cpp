#include <iostream>
using namespace std;
using entero = double;

entero Area ( entero base , entero altura ) {
    entero area = ( base * altura ) / 2 ;
    return area ;
}

int main () {
    entero Base = 0 , Altura = 0 ;
    cout << "\nIngrese la base y la altura de su triangulo para calcular su area \n" ;
    cin >> Base >> Altura ;
    cout << Area ( Base , Altura ) << "\n\n" ;
    return 0 ;
}
