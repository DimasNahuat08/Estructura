#ifndef AHORCADO_H
#define AHORCADO_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;


class ahorcado
{
    public:
        ahorcado();

        void mein();

        void mostrar();
        void ingresar(char x);
        void inicializar();
        string obtener_palabra_aleatoria();

    protected:

    private:
};

#endif // AHORCADO_H
