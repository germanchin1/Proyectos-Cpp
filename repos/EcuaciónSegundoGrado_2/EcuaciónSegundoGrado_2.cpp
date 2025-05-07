#include <iostream>
#include <cmath>
using namespace std;

double a, b, c, x1, x2;

void pedirDatos() {
      cout << "Introduce a: \n";
      cin >> a;
      cout << "Introduce b: \n";
      cin >> b;
      cout << "Introduce c: \n";
      cin >> c;
}

void calcular() {
      double discriminante = (b * b) - (4 * a * c);

      if (discriminante < 0) {
            cout << "No hay resultados reales.\n";
      }
      else {
            double raiz = sqrt(discriminante);
            x1 = (-b + raiz) / (2 * a);
            x2 = (-b - raiz) / (2 * a);
      }
}

void darResultado() {
      if (x1 == x2) {
            cout << "1 resultado: " << x1 << "\n";
      }
      else {
            cout << "2 resultados: \n";
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";
      }
}

int main() {
      pedirDatos();
      calcular();
      darResultado();
}

