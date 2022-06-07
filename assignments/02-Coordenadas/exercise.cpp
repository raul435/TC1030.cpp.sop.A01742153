#include <iostream>
#include <cmath>

#include "Rect.hpp"
#include "Polar.hpp"

int main() 
{
  Rect r1(1,2);
  Rect r2(3,4);
  Rect r3;
  Rect r4;
  Rect r5;
  Rect r6;

  r3 = r1 + r2;

  std::cout << "Sumando coordenadas rectangulares:\n";
  std::cout << r1 << " + " << r2 << " = " << r3;

  r5 = r1 - r2;

  std::cout << "resta coordenadas rectangulares:\n";
  std::cout << r1 << " - " << r2 << " = " << r5;

  std::cout << "Valor de PI radianes\n";
  std::cout << M_PI << "\n";

  Polar p1(4,M_PI / 6);
  r4 = r3 + p1;

  std::cout << "Sumando coordenadas rectangulares y polares:\n";
  std::cout << r3 << " + " << p1 << " = " << r4;

  r5 = r3 - p1;

  std::cout << "restando coordenadas rectangulares y polares:\n";
  std::cout << r5 << " - " << p1 << " = " << r6;

  Polar p2(5, M_PI/ 6);
  Polar p3;
  Polar p4;

  p3 = p1 * p2;

  std::cout << "Multiplicando coordenadas polares:\n";
  std::cout << p1 << " * " << p2 << " = " << p3;


  p4 = p1 / p2;

  std::cout << "dividiendo coordenadas polares:\n";
  std::cout << p1 << " / " << p2 << " = " << p4;

}
