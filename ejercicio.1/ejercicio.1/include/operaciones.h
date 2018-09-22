#ifndef CONJUNTOS_H
#define CONJUNTOS_H


class operaciones
{
    public:
        operaciones();

        int Getnumero() { return numero; }
        void Setnumero(int val) { numero = val; }
        int Getpos() { return pos; }
        void Setpos(int val) { pos = val; }

        int lista(int conjuntoA[], int conjuntoB[],int num);
        void ConjuntoVacio();
        int AnadirElemento(int conjunto[],int num);
        int PerteneceAlConjunto(int conjunto[],int num);
        int RetirarElemento(int conjunto[],int num);
        int Union(int conjuntoA[], int conjuntoB[],int num);
        int Interseccion(int conjuntoA[], int conjuntoB[],int num);
        int Diferencia(int conjuntoA[], int conjuntoB[],int num);

    protected:

    private:
        int numero;
        int pos;
};

#endif // CONJUNTOS_H

