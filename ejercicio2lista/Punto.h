#ifndef PUNTO_H
#define PUNTO_H

class Punto
{

private:
float x;
float y;


public:
Punto(float x_coord, float y_coord);
Punto();
void setX(float x_coord);
void setY(float y_coord);


float getX()const;
float getY()const;

void printData();

};
#endif
