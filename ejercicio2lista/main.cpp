#include <iostream>
#include "Punto.h"
#include "Linea.h"
using namespace std;


int main()
{
Linea Lin;
float x,y;


cout<<"ingrese coordenadas punto 1 (x,y)"<<endl;
cin >> x>>y;


Lin.setAsignarP1(x,y);

cout<<"ingrese coordenadas punto 2 (x,y)"<<endl;
cin >> x>>y;
Lin.setAsignarP2(x,y);

Lin.print();
Lin.equation();
Lin.norma();
Lin.slope();

}
