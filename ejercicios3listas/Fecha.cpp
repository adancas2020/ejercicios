#include "Fecha.h"
#include<iostream>
using namespace std;

Fecha::Fecha()
{
cout<<"Se ha creado una fecha"<<endl; //ctor
}
Fecha::Fecha(int _dia,int _mes,int _anio){
dia=_dia;
mes=_mes;
anio=_anio;


}
 float Fecha::getdia(){
 return dia;

 }
float Fecha::getmes(){
        return mes;

        }
float Fecha::getanio(){
        return anio;

        }
void Fecha::Print(){

cout<<"La fecha es:"<<dia<<"-"<<mes<<"-"<<anio<<endl;

}


void Fecha::Actualizar(){
int Dia;
int Mes;
int Anio;
int diaspasaron;
int mesespasaron;
int aniospasaron;
int Diastranscurrieron;



cout<<"Escriba el nuevo dia"<<endl;
cin>>Dia;

cout<<"Escriba el nuevo mes"<<endl;
cin>>Mes;

cout<<"Escriba el nuevo año"<<endl;
cin>>Anio;

cout<<"La nueva fecha es:"<<Dia<<"-"<<Mes<<"-"<<Anio<<endl;
if (Anio<anio)
{
    cout<<"No se puede retroceder en el tiempo xd"<<endl;
}




else if(Mes<mes){


     cout<<"No se puede retroceder en el tiempo xd"<<endl;

}

else if(Dia<dia) {

  cout<<"No se puede retroceder en el tiempo xd"<<endl;

}

else{
diaspasaron=(Dia-dia)*1;
mesespasaron=(Mes-mes)*30;
aniospasaron=(Anio-anio)*365;
Diastranscurrieron=diaspasaron+mesespasaron+aniospasaron;
cout<<"Los dias que pasaron fueron:"<<Diastranscurrieron<<endl;

}

}
