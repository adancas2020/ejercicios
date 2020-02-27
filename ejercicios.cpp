#include<iostream>
#include<stdlib.h>
#include<math.h>
 using namespace std;

 class Point{

 private:
     float X;
     float Y;

     public:
     Point(float _X,float _Y);
Point();
     float obtenerX();
     void setX(float _X);
     float obtenerY();
     void setY(float _Y);
     void Negate();
void print();
float Norm();
 };

 Point::Point(float _X,float _Y){
 X=_X;

 Y=_Y;

 }


  void Point::setX(float _X){
  X=_X;
 }




  void Point::setY(float _Y){
 Y=_Y;

 }
 void Point::Negate(){


X= -X;
Y= -Y;



}
 float Point::obtenerX(){
 return X;

 }
 float Point::obtenerY(){
 return Y;

 }
float Point::Norm(){

return sqrt(X*X+Y*Y);


}
void Point::print(){

cout <<"las coordenadas son:" << X<<","<<Y << endl;


cout <<"la norma es:" <<Norm()<< endl;

}

 int main(){

 Point punto(7,8);
 punto.Negate();
  punto.print();

 return 0;



 }
