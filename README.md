algoritmosGrafos
================

C++ Implementación y aplicación de los algoritmos fundamentales con grafos.


IMPLEMENTACIÓN: Desarrollar un programa en C++ utilizando clases. Las estructuras necesarias para almacenar el grafo
deben ser propiedades de la clase. 

El programa debe cargar ficheros donde estarán representadas las coordenadas de los nodos y una matriz de adyacencia
que representará los arcos de un grafo. 

Hay una batería de grafos ya definidos en el campus virtual para hacer pruebas.

Se crearán las listas de adyacencia del grafo para la ejecución de los siguientes algoritmos, seleccionables según un menú.


1. Recorrido en profundidad del grafo desde un vértice dado por el usuario.

2. Recorrido en anchura del grafo desde un vértice dado por el usuario.

3. Distancias y caminos mínimos desde un vértice dado por el usuario aplicando el
algoritmo de Dijkstra que use un montículo (Heap) para la cola con prioridades.

4. Árbol generador mínimo (MST) aplicando el algoritmo de Kruskal.


Formato de los datos.


El formato del archivo que contendrá el grafo es el siguiente. 

En primer lugar se encontrará el número de vértices del grafo y, a partir de la segunda línea, se encontrarán pares
de valores flotantes que definen las coordenadas de las posiciones de los nodos. A continuación se encontrará la
matriz de adyacencia por filas.

Los grafos están definidos en dos dimensiones X e Y, lo que permitirá dibujar el grafo con cierto realismo.

Las longitudes de las aristas se calculan a partir de las coordenadas de los extremos usando la distancia euclídea;
la fórmula para calcular la distancia entre dos puntos A(x 1 ,y 1 ) y B(x 2 ,y 2 ) es

D ( A ( x 1 , y 1 ), B ( x 2 , y 2 ))  ( x 1  x 2 ) 2  ( y 1  y 2 ) 2
