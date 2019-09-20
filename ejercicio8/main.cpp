#include <iostream>
using namespace std ;
using entero = int ;

int main() {
    entero numero = 0 ;
    //  CONTROL DE ENTRADA DEL TAMAÑO DE LA MATRIZ
    do{
        cin >> numero ;
    } while ( numero < 1 || numero > 30 ) ;

    //  SE CREA UNA MATRIZ DINAMICA
    char Matriz[numero][numero] ;

    //  SE RELLENA LA MATRIZ CON EL PATRON SOLICITADO
    for ( entero i = 0 ; i < numero ; i++ ) {
        for ( entero j = 0 ; j < numero ; j++ ) {
            if ( i > j || i == j )
                Matriz[i][j] = '*' ;
            else
                Matriz[i][j] = ' ' ;
        }
    }

    //  SE IMPRIME LA MATRIZ
    for ( entero i = 0 ; i < numero ; i++ ) {
        cout << "\n" ;
        for ( entero j = 0 ; j < numero ; j++ ) {
            cout << Matriz[i][j] << ' ' ;
        }
    }
    cout << "\n\n" ;
    return 0;
}
