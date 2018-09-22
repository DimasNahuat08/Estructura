#include <iostream>
#include "ahorcado.h"
/* DIMAS NAHUAT HERRERA EJERCICIO 2
PROFESOR: LEONEL PECH MAY
ESTE PROGRAMA ES EL JUEGO COMUN DEL AHORCADO OFRECE BREBES PISTAS
SE PUEDEN USAR ESPACIOS ENTRE PALABRAS  USANDO MINUSCULAS*/


using namespace std;

int main()
{
    ahorcado aho;


     cout<<"______________________________________________"<<endl;
    cout << "Bienvenido al juego del ahorcado" << endl;
    cout<<"______________________________________________"<<endl;
    cout<<"SELECCIONA UNA  PALABRA O LETRA PARA COMENZAR PUEDES USAR ESPACIOS "<<endl;
    cout<<"(*pista*)---> NOMBRES DE MAESTROS DE PROGRAMACION QUE LABORAN EN EL ITSVA <---"<<endl;
    cout<<"si usas palabras gastas tus vidas  si usas letras llegaras mas lejos con mas intentos"<<endl;
    cout<<"los * emulan  la cantidad de letras que deben ocuparse"<<endl;


    aho.mein();

}
