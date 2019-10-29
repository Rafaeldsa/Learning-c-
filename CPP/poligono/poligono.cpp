#include "poligono.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// funções da classe poligono

void poligono :: set_lado(float nlado) {
    this-> lado = nlado;
};

float poligono :: get_lado()
 {
     return lado;
 }

 float quadrado :: calcula_area(float lado)
 {
    return lado * lado;
 }

 float triangulo :: calcula_area(float lado) {
    return (sqrt(3) / 4) * (lado * lado);
 }
