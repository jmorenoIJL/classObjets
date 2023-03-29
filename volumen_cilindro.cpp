// member initialization
#include <iostream>
using namespace std;

class Circulo {
  double radius;
public:
  /*
  void set_values (int,int);
  */

  Circulo(double r) : radius(r) { }

  double area() {
    return radius*radius*3.14159265;
  }
};

/*
void Rectangulo::set_values (int x, int y) {
  ancho = x;
  alto = y;
}
*/

class Cilindro {
  Circulo circuloBase; // creamos un objeto circulo
  double height;
public:
  Cilindro(double r, double h) : circuloBase (r), height(h) {}
  double volume() {
    return circuloBase.area() * height;
  }
};

int main () {
  Cilindro cubeta (10,20);
  cout << "el volumen de la cubeta es: " << cubeta.volume() << '\n';
  return 0;
}