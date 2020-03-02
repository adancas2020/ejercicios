#include "Hora.h"
#include<iostream>
using namespace std;

Hora::Hora()
{
cout<<"Se ha creado una hora"<<endl; //ctor
}
Hora::Hora(int _Horas,int _Minutos){
Horas=_Horas;
Minutos=_Minutos;



}
 float Hora::getHoras(){
 return Horas;

 }
float Hora::getMinutos(){
        return Minutos;

        }

void Hora::Print(){

cout<<"La Hora actual es:"<<Horas<<":"<<Minutos<<endl;

}


void Hora::Actualizar(){
int hora;
int minutos;
int horaspasaron;
int minutospasaron;




cout<<"Escriba la nueva hora"<<endl;
cin>>hora;

cout<<"Escriba los nuevos minutos"<<endl;
cin>>minutos;


cout<<"La nueva hora es:"<<hora<<":"<<minutos<<endl;



if (hora<Horas)
{

    cout<<"No se puede retroceder en el tiempo xd"<<endl;

}

else if (minutos<Minutos && minutos!=0){

     cout<<"No se puede retroceder en el tiempo xd"<<endl;
}

else{
horaspasaron=(hora-Horas)*1;
minutospasaron=(minutos-Minutos);

if (minutospasaron>60){
    horaspasaron=horaspasaron+1;

}
if (minutospasaron<0){
    horaspasaron=horaspasaron-1;
    minutospasaron=60+minutospasaron;

}


cout<<"El tiempo que paso fue de:"<<horaspasaron<<"hrs "<<minutospasaron<<"min"<<endl;

}

}
