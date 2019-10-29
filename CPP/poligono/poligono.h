#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class poligono
{
private:
    float lado;
public:

    void set_lado(float);
    float get_lado();
};

class quadrado : public poligono
{
public:
    float calcula_area(float);
};
class triangulo : public poligono
{
public:
    float calcula_area(float);
};

#endif
