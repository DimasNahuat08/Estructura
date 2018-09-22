#include "operaciones.h"
#include <iostream>
#include<process.h>
#include <stdlib.h>

using namespace std;

operaciones::operaciones()
{

}

 int operaciones::lista(int conjuntoA[],int conjuntoB[],int num)
{
     int arc;


    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++) {
            if(conjuntoA[i]>conjuntoA[j]){
                arc=conjuntoA[i];
                conjuntoA[i]=conjuntoA[j];
                conjuntoA[j]=arc;
            }
        }
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++) {
            if(conjuntoB[i]>conjuntoB[j]){
                arc=conjuntoB[i];
                conjuntoB[i]=conjuntoB[j];
                conjuntoB[j]=arc;
            }
        }
    }
    cout<<"LISTA ORDENADA DE LOS ELEMENTOS DEL"<<endl<<endl;
    cout << " CONJUNTO A"<<endl;
    for (int i=0;i<num;i++){
       cout<<conjuntoA[i]<<", ";
    }

    cout <<endl<< " CONJUNTO B"<<endl;
    for (int i=0;i<num; i++){
        cout << conjuntoB[i]<<", ";
    }
}

int operaciones::Union(int conjuntoA[], int conjuntoB[],int num)
{
    int arc;

    int conjuntoC[num+num];
    int i, j, k,c, flag;

       k=0;
    for(i=0;i<num;++i){
        conjuntoC[k]=conjuntoA[i];
        k++;
    }
    for(i=0;i<num;++i){
        flag=1;
        for(j=0;j<num;++j){
            if(conjuntoB[i]==conjuntoA[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            conjuntoC[k]=conjuntoB[i];
            k++;
        }
    }
    for(i=0;i<k;++i){
        conjuntoC[i];
    }
    //comparar numeros iguales he eliminar
    for(i=0;i<k;++i)
        for(j=i+1;j<k;)
        {
            if(conjuntoC[i]==conjuntoC[j])
            {
                for(c=j;c<k-1;++c)
                    conjuntoC[c]=conjuntoC[c+1];

                --k;
            }
            else
                ++j;
        }
    cout<<"\nUnion de los dos conjuntos:\n";
    cout<<"\n";
    for(i=0;i<k;++i)
        cout<<conjuntoC[i]<<" ";
}

int operaciones::Interseccion(int conjuntoA[], int conjuntoB[],int num)
{
    cout << "la interseccion del conjunto A y B es\n"<<endl;

    int p=0, q=0;
    while ( p <= num && q <= num ) {

      if ( conjuntoA [ p ] < conjuntoB [ q ]) {

         p ++;

      } else if ( conjuntoB [ q ] < conjuntoA [ p ]) {

         q ++;

      } else if ( conjuntoA [ p ] == conjuntoB [ q ]) {

         cout << conjuntoA [ p ] << "  " ;

         p ++;
         q ++;

      }

   }

}

int operaciones::Diferencia(int conjuntoA[], int conjuntoB[],int num)
{
    int conjuntoC[num], conjuntoD[num],conjuntoE[num];
    int i,j,in=0,u=0,s=0,cont;

      for(i=0;i<num;i++)
        {
            conjuntoC[u]=conjuntoA[i];
            u++;
        }

        for(i=0;i<num;i++)
        {
        cont=0;
            for(j=0;j<num;j++)
                if(conjuntoB[i]==conjuntoA[j]){
                cont=1;
                break;
                }
                if(cont==0){
                conjuntoC[u]=conjuntoB[i];
                u++;
                }
        }

        for(i=0;i<num;i++)
            for(j=0;j<num;j++)
                if(conjuntoA[i]==conjuntoB[j]){
                    conjuntoD[in]=conjuntoA[i];
                    in++;
                }

        for(i=0;i<u;i++)
        {
            cont=0;
            for(j=0;j<in;j++)
                if(conjuntoC[i]==conjuntoD[j])
                    {
                    cont=1;
                    break;
                    }
                if(cont==0)
                    {
                    conjuntoE[s]=conjuntoC[i];
                    s++;
                    }

 }
cout<<"LA DIFERENCIA SIMETRICA ES:"<<endl;
int arc;
for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++) {
            if(conjuntoE[i]>conjuntoE[j]){
                arc=conjuntoE[i];
                conjuntoE[i]=conjuntoE[j];
                conjuntoE[j]=arc;
            }
        }
    }
for(i=0;i<s;i++)
cout<<conjuntoE[i]<<" ";
}

int operaciones::PerteneceAlConjunto(int conjunto[],int num)
{
    int ban=0;
    for(int i=0; i<num; i++){
        if(Getnumero()==conjunto[i])
            {
            ban=1;
            cout<<endl<<"el numero "<<Getnumero()<<" se encuentra en la posicion: "<<" ["<<i+1<<"] "<<endl;
            break;
            }else{
                ban=0;
                }
    }

    if(ban==0){
        cout<<endl<<endl<<"el numero no se encuentra en el arreglo"<<endl;
    }
}

int operaciones::RetirarElemento(int conjunto[],int num)
{
      int i,j,conjuntoB[num+num];

    for(i=0,j=0;i<num;++i)
    {
        if(conjunto[i]!= Getnumero())
            conjuntoB[j++]=conjunto[i];
    }

    if(j==num)
    {
        cout<<"\nEL ELEMENTO NO ES DEL CONJUNTO";
        exit(0);
    }
    else
    {
        cout<<"\nEL CONJUNTO NUEVO ES ";
        for(i=0;i<j;i++)
            cout<<conjuntoB[i]<<" ";
    }
}

int operaciones::AnadirElemento(int conjunto[],int num)
{
    for(int i=num;i>Getpos(); i--)
    {
        conjunto[i]=conjunto[i-1];
    }
    conjunto[Getpos()]=Getnumero();

    cout << "EL ELEMENTO O NUMERO SE HAALMACENADO CON EXITO"<<endl;
	cout << "LA MATRIZ NUEVA ES:\n"<<endl;
	for(int i = 0; i <num + 1; i ++)
	{
		cout << conjunto[i] << "  ";
	}

}

void operaciones::ConjuntoVacio()
{
    cout << "\nLOS CONJUNTOS A Y B ESTAN VACIOS";
}
