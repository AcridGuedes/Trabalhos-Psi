#include <iostream>
#include <cmath>

using namespace std;

float distanciaPontos (float xa, float ya, float xb, float yb)
{
  float d;
  d = sqrt (pow (xb - xa, 2) + pow (yb - ya, 2));
  return d;
}


int
main ()
{
  float x1, x2, y1, y2;
  cout << "Introduza as coordenadas dos dois pontos:\n";
  cout << "Ponto 1- coordenada X:";
  cin >> x1;
  cout << "Ponto 1- coordenada Y:";
  cin >> y1;
  cout << "Ponto 1- coordenada X:";
  cin >> x2;
  cout << "Ponto 1- coordenada Y:";
  cin >> y2;
  cout << "A distancia entre os dois pontos C)"<<distanciaPontos (x1, y1, x2, y2);
}
