#include "ahorcado.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

ahorcado::ahorcado()
{

}

string palabra_original;
string palabra_mostrar;
int vidas;


void ahorcado::mein(){

    inicializar();
    mostrar();
    while(vidas>0 && palabra_mostrar!=palabra_original){
        char x;
        cin>>x;
        system("cls");
        ingresar(x);
        mostrar();
    }


    if(vidas>0){
        cout << "*you won restart and try with words.... puedes *"<<endl;
    }else{
        cout << "Perdiste, la palabra era: "<<palabra_original<<endl;
    }


}




void ahorcado::mostrar(){

    cout << endl<<endl;
    cout << "Intentos Posibles: "<<vidas<<endl;
    cout << palabra_mostrar<<endl;
}




void ahorcado::ingresar(char x){
    bool perdividas=true;

    for(int i=0; i<palabra_original.length(); i++){
        if(x==palabra_original[i]){
            perdividas=false;
            palabra_mostrar[i]=x;
        }
    }

    if(perdividas) vidas--;
}



void ahorcado::inicializar(){
        vidas = 10;
        palabra_original=obtener_palabra_aleatoria();


        for(int i=0; i<palabra_original.length() ; i++){
        if(palabra_original[i]>='A' && palabra_original[i]<='Z'){
            palabra_original[i]+=32;
        }
    }


    for (int j=0; j<palabra_original.length() ; j++){
        if(palabra_original[j]>='a' && palabra_original[j]<='z'){
            palabra_mostrar+='*';
        }else{
            palabra_mostrar+=palabra_original[j];
        }
    }
}



string ahorcado::obtener_palabra_aleatoria(){
  int dato;

    vector<string>palabras;
    palabras.push_back("leonel");
    palabras.push_back("jorge pool");
    palabras.push_back("erick burgos");
    palabras.push_back("rusel");
    palabras.push_back("luis balam");

    srand(time(NULL));
    dato = 0 + rand()%(5);

    return palabras[dato];
}
