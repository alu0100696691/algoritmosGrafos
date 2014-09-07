/*
******************************************************************
PROGRAMA: Practica 6, GRAFOS.
ASIGNATURA: 2º CURSO, Algoritmos y Estructuras de Datos Avanzados.
AUTOR: Jose Antonio Rodriguez Leandro. 
FECHA: 9 de MAYO del 2012
******************************************************************
*/

#include "practica6.h"

#include<iostream>

using namespace std;


int main ()
{
    char nombreFichero[30];
    int opc,i,j;
    int inicio=0,fin=0;
    //vector< vector<int> >  minimo( 5, vector<int> ( 5 ) );;  //matriz de adyacencia del arbol minimo que devuelve kruskal
    
        cout << "\n\n\n\n\n";
	cout << "*****************************************************************************************\n";
	cout << " P R A C T I C A: 6                                                    G R A F O S\n";
	cout << "*****************************************************************************************\n\n";
        cout << " Introduzca el nombre del fichero: ";
        cin >> nombreFichero;
	cout << "\n\n\n";
	
        GRAFO Ografo (nombreFichero);  //creamos objeto
	Ografo.Mostrar_Grafo();  //Lista de Adyacencia de los Sucesores
        
	do
	{  
	  cout << "\n\nMENU: \n";
	  cout << "\t1.Distancias y caminos mínimos desde un vértice dado por el usuario aplicando el algoritmo de Dijkstra.\n";
	  cout << "\t2.Aplicar el algoritmo de Edmonds-karp.\n";
	  cout << "\t3.Aplicar el algoritmo de Kruskal.\n";
	  cout << "\t4.SALIR.\n\n";
	  cin >> opc;
	
	
	switch(opc)
	{
	  case(1):
	    Ografo.Dijkstra();
	    break;
	  case(2):
	    Ografo.edmods_karp();
	    break;
	  case(3):
	    Ografo.kruskal();
	    /*minimo = Ografo.kruskal();
	    cout << "\n\nKRUSKAL, MATRIZ DE ADYACENCIA DEL ARBOL MINIMO.\n\n";
	    for(i=0;i<5;i++)
		  for(j=0;j<5;j++)
		  {
		    cout << minimo.at(i).at(j) << " ";
		   // if(minimo.at(i).at(j) == 1 || minimo.at(i).at(j) == 0)
		    //  cout << i+1 << "->";
		  } */ 
	    break;
	  case(4):
	    
	    break;
	};    
	    
	} while( opc != 4);


        

    return 0;
}

