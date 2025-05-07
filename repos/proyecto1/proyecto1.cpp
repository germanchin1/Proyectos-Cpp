// proyecto1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
    int a;
    int b;
    int c;

    /*Pedimos al usuario que introduzca los valores de: (a,b,c) */


    cout << ("Introduce a: \n");
    cin >> (a);
    cout << ("Introduce b: \n");
    cin >> (b);
    cout << ("Introduce c: \n");
    cin >> (c);


    /*Calculamos la raíz cuadrada */

    int raiz = (sqrt((b * b) - (4 * a * c)));

  /*  int x1 = (-b + (sqrt((b * b) - (4 * a * c)))) / (2 * a);
    int x2 = (-b - (sqrt((b * b) - (4 * a * c)))) / (2 * a); */

    /*Calculamos los resultados de la equación */


    int x1 = (-b + (raiz) / (2 * a));
    int x2 = (-b - (raiz) / (2 * a));

    /*Para comprobar cuantos resultados tiene la equación comparamos las variables 
      x1 y x2, si son iguales solo tiene un resultado, si son diferentes tendrá 2 resultado
      y los demás el resultado será 0
     */


    /*1 resultado*/
    if (x1 = x2)
    {
        cout << ("resultado: \n");    
        cout << x1 << "\n";

    }
    /*2 resultados*/
    else if (!(x1 = x2))
    {
        cout << ("2 Resultados \n");
        cout << ("resultado 1: \n");
        cout << x1 << "\n";
        cout << ("resultado 2 : \n");
        cout << x2, "\n";
    }
    /*Sin resultados*/
    else
    {
        cout << ("no Tiene resultado");

    }
    
    
    

 


}

