#include <iostream>
using namespace std ;
using entero = int ;

int main() {
    entero numero = 0 , valor = 0 , iterativo = 0 ;
    entero ContadorD = 0 , ContadorA = 0 ,  ContadorB = 0 ;
    bool flag = false;
    //control de entrada
    do {
        cin >> numero;
        if (numero >= 100)
            flag = true;
    } while (!flag);
    //  " !flag "  -->  " flag == false "

    // LECTURA DEL NUMERO
    // 'El valor se inicializa en el numero'
    valor = numero ;
    // 'El programa trabaja leyendo el iterativo como los dígitos ordenados del numero'
    do{
        iterativo = valor % 10 ;
        // 'El iterativo será el último dígito del número'
        if ((iterativo % 2) == 0)
        {   ContadorD += 1 ;
            ContadorA += 1 ;
        }
        if ( iterativo % 2 != 0 )
        {   ContadorD += 1 ;
            ContadorB += 1 ;
        }
        //se genera un nuevo valor para trabajar
        valor = valor / 10 ;
    } while ( valor > 0 ) ;

    cout << "\n    El numero es: " << numero ;
    cout << "\n    El numero de dígitos es: " << ContadorD ;
    cout << "\n    El numero de dígitos pares es :" << ContadorA ;
    cout << "\n    El numero de dígitos impares es :" << ContadorB ;

    return 0;
}
