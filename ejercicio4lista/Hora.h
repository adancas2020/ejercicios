#ifndef HORA_H
#define HORA_H


class Hora
{
    public:
        Hora();
        Hora(int _Horas,int _Minutos);
        void Actualizar();
        float getHoras();
        float getMinutos();

        void Print();

       void setHoras(int _Horas);
       void setMinutos(int _Minutos);

    private:
        int Horas;
        int Minutos;


};

#endif // HORA_H
