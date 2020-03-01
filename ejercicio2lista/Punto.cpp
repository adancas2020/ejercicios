
#include "Punto.h"
#include <iostream>

using std::cout;
using std::endl;
Punto::Punto(float x_coord, float y_coord){
x = x_coord;
y = y_coord;

}
Punto::Punto(){}
void Punto::setX(float x_coord){
x = x_coord;
}
void Punto::setY(float y_coord){
y = y_coord;
}

float Punto::getX()const{
return x;
}
float Punto::getY()const{
return y;
}



void Punto::printData(){

cout << "El punto es: (" << x << ", " << y << ")" << endl;
}
