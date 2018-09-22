#include <iostream>
#include "operaciones.h"
#include <stdlib.h>
#include<string>
#include<stdlib.h>
using namespace std;

/*NAHUAT HERRERA DIMAS
PROF. JOSÉ LEONEL MAY PECH
EJE. 1
 ESTE PROGRAMA SE BASA EN LA REALIZACION DE CO NJUNTOS (UNION, INTERSECCIÓN,DIFERENCIA
 BUSQUEDA DE UN ELEMENTO DENTRO DE UN CONJUNTO,ELIMINACION DE UN ELEMENTO DENTRO DE UN CONJUNTO
 ETC.
*/


int main()
{

    int num;


   cout<<"___________________________________________________"<<endl;
    cout << "INGRESA EL TAMAÑO QUE DESEES PARA LOS CONJUNTOS"<< endl;
    cout<<"___________________________________________________"<<endl;
    cout<<"-->";
    cin >> num;

    int conjuntoA[num];
    int conjuntoB[num];

    cout << "conjunto A\n"<< endl;
    for(int i=0; i<num; i++){
        cin >> conjuntoA[i];
        cout << "\n";
    }
    cout << "\nconjunto B\n"<< endl;
    for(int j=0; j<num; j++){
        cin >> conjuntoB[j];
        cout << "\n";
    }

    char a;
do{
    system("cls");



    operaciones ope;
    ope.lista(conjuntoA, conjuntoB,num);
    int op;
    cout << "\n*OPERACION DE CONJUNTOS\n"<< endl;
    cout << "\n1. UNION \n"<< endl;
    cout << "2. INTERSECCION \n"<< endl;
    cout << "3. DIFERNCIA SIMETRICA \n"<< endl;
    cout << "4. PERTINENCIA DE UN NUMERO \n"<< endl;
    cout << "5. RETIRAR NUMERO \n"<< endl;
    cout << "6. AÑADIR NUMERO \n"<< endl;
    cout << "7. CONJUNTO VACIO \n"<< endl;
    cin >> op;
    switch(op){

    case 1:
        system("cls");
            cout << "\n1. UNION \n"<< endl;

            ope.Union(conjuntoA, conjuntoB,num);
    break;
    case 2:
        system("cls");
            cout << "\n2. INTERSECCION \n"<< endl;
            cout << "\nLA INTERSECCION ES\n"<< endl;
            ope.Interseccion(conjuntoA, conjuntoB,num);
    break;
    case 3:
        system("cls");
        cout << "\n3. DIFERNCIA \n"<< endl;

        ope.Diferencia(conjuntoA, conjuntoB,num);
    break;
    case 4:
        system("cls");
        int c;
        cout << "\n4. BUSCAR EL NUMERO EN EL CONJUNTO; \n"<< endl;
        cout << "\n1. CONJUNTO A \n"<< endl;
        cout << "\n2. CONJUNTO B \n"<< endl;
        cout << "\n TECLEA 1 PARA EL PRIMER CONJUNTO(A), O 2 PARA EL SEGUNDO CONJUNTO (B).\n"<<endl;
        cin >> c;
        if(c==1){
            int a;
            cout << "\NUMERO QUE QUIERE BUCAR \n"<< endl;
            cin >> a;
            ope.Setnumero(a);
            ope.PerteneceAlConjunto(conjuntoA,num);
        }else{
            int b;
            cout << "\NUMERO(#) QUE QUIERE BUCAR \n"<< endl;
            cin >> b;
            ope.Setnumero(b);
            ope.PerteneceAlConjunto(conjuntoB,num);
        }
    break;
    case 5:
        system("cls");

        cout << "\n5. RETIRAR NUMERO \n"<< endl;
        cout << "\n1. CONJUNTO A \n"<< endl;
        cout << "\n2. CONJUNTO B \n"<< endl;
        cout << "\n TECLEA 1 PARA EL PRIMER CONJUNTO(A), O 2 PARA EL SEGUNDO CONJUNTO (B).\n"<<endl;
        cin >> c;
        if(c==1){
            int a;
            cout << "\nINTRODUZCA EL NUMERO A SUSTRAER \n"<< endl;
            cin >> a;
            ope.Setnumero(a);
            ope.RetirarElemento(conjuntoA,num);
        }else{
            int x;
            cout << "\nINTRODUZCA EL NUMERO A SUSTRAER \n"<< endl;
            cin >> x;
            ope.Setnumero(x);
            ope.RetirarElemento(conjuntoB,num);
            }
            break;
    case 6:
        system("cls");

        cout << "6. AÑADIR NUMERO \n"<< endl;
        cout << "\n1. CONJUNTO A \n"<< endl;
        cout << "\n2. CONJUNTO B \n"<< endl;
        cout << "\n TECLEA 1 PARA EL PRIMER CONJUNTO(A), O 2 PARA EL SEGUNDO CONJUNTO (B).\n"<<endl;
        cin >> c;
        if(c==1){
            int a,z;
            cout << "\nINTRODUZCA EL NUMERO A ANADIR \n"<< endl;
            cin >> a;
            ope.Setnumero(a);
            cout << "\nINTRODUZCA LA POSICION EN LA QUE LO DESEA \n"<< endl;
            cin >> z;
            ope.Setpos(z);
            ope.AnadirElemento(conjuntoA,num);
        }else{
            int a,z;
            cout << "\nINTRODUZCA EL NUMERO A ANADIR \n"<< endl;
            cin >> a;
            ope.Setnumero(a);
            cout << "\INTRODUZCA LA POSICION EN LA QUE LO DESEA \n"<< endl;
            cin >> z;
            ope.Setpos(z);
            ope.AnadirElemento(conjuntoB,num);
            }
            break;
    case 7:
        system("cls");

        cout << "7. CONJUNTO VACIO \n"<< endl;
        ope.ConjuntoVacio();
        break;
    }
cout << "\n\n DESEA SEGUIR (S/N)"<< endl;
cin>> a;
}while(a=='S'||a=='s');
cout<<endl;
cout<<"SALIENDO......................."<<endl;
system("pause");

return 0;
}

