#ifndef LINEA_H
#define LINEA_H
#include <string>
#include <iostream>
#include <math.h>
#include "Punto.h"
using namespace std;
class Linea
{
	private:
	Punto x1;
	Punto y1;
    Punto x2;
	Punto y2;


	public:
	Linea(){

	cout << "se ha creado una linea"<< endl;
	}

	void setAsignarP1(float x, float y){
		x1.setX(x);
		y1.setY(y);


	}

	void setAsignarP2(float x, float y){
		x2.setX(x);
		y2.setY(y);


	}

void print(){

cout << "Coordenadas: " <<x1.getX() <<","<< y1.getY()<<"   "<< x2.getX()<<","<<y2.getY()<<endl;




}

 void norma(){


 cout << "Norma: " <<sqrt(pow((x2.getX()-x1.getX()),2)+pow((y2.getY()-y1.getY()),2))<< endl;
 }


 void slope(){

cout << "Pendiente: " <<(y2.getY()-y1.getY())/(x2.getX()-x1.getX())<< endl;

 }

void equation(){
cout << "La ecuacion de la recta es: " <<"("<<y2.getY()<<"-"<<y1.getY()<<")"<<"="<<(y2.getY()-y1.getY())/(x2.getX()-x1.getX())<<"("<<x2.getX()<<"-"<<x1.getX()<<")"<< endl;


}

};

#endif
