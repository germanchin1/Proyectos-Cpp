
#include <iostream>
#include <cmath>
using namespace std;
int x;
int y;
int sum;
int res;
int mul;

void pedirdatos() {
      cout << "Introduce el Valor 1 ";
      cin >> x;

      if (x == 0)
      {
            cout << ("No esta permitido el 0 \n");
            cout << ("Da otro Valor\n");
            cin >> x;

      }
      cout << "Introduce el Valor 2 ";
      cin >> y;
      if (y == 0)

      {
            cout << ("No esta permitido el 0 \n");
            cout << ("Da otro Valor\n");
            cin >> y;

      }
      
}
void sumar() {
      sum = x + y;
      cout << "Suma " << sum << "\n";
}

void restar() {
      res = x - y;
      cout << "Resta " << res << "\n";
}

void multiplicar() {
      mul = x * y;
      cout << "multiplicacion " << mul << "\n";
}

void dividir() {
      cout << "Division " << (y / x) << "\n";
}


int main()
{
      pedirdatos();
      sumar();
      restar();
      dividir();
      multiplicar();

}