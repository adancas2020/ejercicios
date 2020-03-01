#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        Fecha();
        Fecha(int _dia,int _mes,int _anio);
        void Actualizar();
        float getdia();
        float getmes();
        float getanio();
        void Print();

       void setanio(int _anio);
       void setmes(int _mes);
       void setdia(int _dia);
    private:
        int dia;
        int mes;
        int anio;

};

#endif // FECHA_H
