#include <iostream>
using namespace std;
// inicia declaracion de la clase
class Rectangulo {
    float ancho, alto; // propiedades de la clase
  public:

    // Asignacion de sus propiedades
    void set_values (int,int);

    //public function area
    //retorna el calculo del area
    float area () {
      return ancho*alto;
    }

    // public function perimetro
    // retorna el calculo del perimetro
    float perimetro(){
      return ancho+alto+ancho+alto;
    }
};// termina declaracion de la clase

// set_values asigna valores a las propiedades del objeto
// no retorna nada por que solo asigna valores
// (ancho, alto)
void Rectangulo::set_values (int x, int y) {
  // linea 5 // esta la declaracion de propiedades del objeto
  ancho = x;
  alto = y;
}



int main () {

  Rectangulo rect; // creamos el objeto
  rect.set_values(6,4); // (ancho, alto)

  cout << "Area rectangulo: " << rect.area() << endl;
  cout << "Perimetro rectangulo: " << rect.perimetro() << endl;

  return 0;

}