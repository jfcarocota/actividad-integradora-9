![image](https://user-images.githubusercontent.com/6539267/65068603-ce5dd880-d93d-11e9-9d11-0a0033b192d9.png)


# Actividad Integradora 9 

## Shellsort

<p align="justify">
El ordenamiento Shell, denomino así por su desarrollador Donald Shell (1959), ordena una estructura de una manera similar a la del Bubble Sort, sin embargo no ordena elementos adyacentes sino que utiliza una segmentación entre los datos. Esta segmentación puede ser en cualquier tamaño de acuerdo a una secuencia de valores que empiezan con un valor grande y van disminuyendo hasta llegar al '1'.

El ShellSort ordena subgrupos de elementos separados K unidades (respecto de su posición en el arreglo) del arreglo o lista original. El valor K es llamado incremento.

Después de que los primeros K subgrupos han sido ordenados (generalmente se utiliza inserción directa), se escoge un nuevo valor de K más pequeño, y el arreglo es de nuevo partido entre el nuevo conjunto de subgrupos. Cada uno de los subgrupos mayores es ordenado y el proceso se repite de nuevo con un valor más pequeño de K, como en la grafica de arriba.
<p>

![image](https://user-images.githubusercontent.com/6539267/65117231-95a21b80-d99e-11e9-8498-e8389520c19f.png)

## Selectionsort

<p aling="justify">
El ordenamiento por selección mejora el ordenamiento burbuja haciendo un sólo intercambio por cada pasada a través de la lista. Para hacer esto, un ordenamiento por selección busca el valor mayor a medida que hace una pasada y, después de completar la pasada, lo pone en la ubicación correcta. Al igual que con un ordenamiento burbuja, después de la primera pasada, el ítem mayor está en la ubicación correcta. Después de la segunda pasada, el siguiente mayor está en su ubicación. Este proceso continúa y requiere n−1 pasadas para ordenar los n ítems, ya que el ítem final debe estar en su lugar después de la (n−1)-ésima pasada.
<p>

![image](https://user-images.githubusercontent.com/6539267/65117993-6c35bf80-d99f-11e9-8f53-e178c7d23752.png)

## Heapsort
<p aling="justify">
Es un método de ordenamiento basado con comparación, usa el Montículo o Heap como estructura de datos. Este método es más lento que otros métodos, pero es más eficaz en escenarios más rigurosos. Es una estructura de datos del tipo árbol binario. Este árbol binario tiene que ser completo, en otras palabras, cada nivel debe de estar lleno con excepción del ultimo nivel, en el último nivel, los hijos debe recargarse hacia un mismo lado, generalmente hacia el lado izquierdo, así como se muestra en la imagen de la derecha.
 
Este algoritmo consiste en almacenar todos los elementos en un montículo y luego extraer el nodo que queda como raíz en iteraciones sucesivas obteniendo el conjunto ordenado. Para esto el método realiza los siguientes pasos:

1.    Se construye el Heap/montículo a partir del arreglo original.
2.    La raíz se coloca en el arreglo.
3.    El último elemento del montículo se vuelve la raíz.
4.    La nueva raíz se intercambia con el elemento de mayor valor de cada nivel.
5.    Tras el paso anterior la raíz vuelve a ser el mayor del montículo.
6.    Se repite el paso 2 hasta que quede el arreglo ordenado.
<p>
 
![image](https://user-images.githubusercontent.com/6539267/65119454-1bbf6180-d9a1-11e9-889d-191d6f77164c.png)

## Quicksort

<p aling="justify">
El ordenamiento rápido (quicksort en inglés) es un algoritmo basado en la técnica de divide y vencerás, que permite, en promedio, ordenar n elementos en un tiempo proporcional a n log n. Esta es la técnica de ordenamiento más rápida conocida. Fue desarrollada por C. Antony R. Hoare en 1960. El algoritmo original es recursivo, pero se utilizan versiones iterativas para mejorar su rendimiento (los algoritmos recursivos son en general más lentos que los iterativos, y consumen más recursos).
El algoritmo fundamental es el siguiente:

Elegir un elemento de la lista de elementos a ordenar, al que llamaremos pivote.
Resituar los demás elementos de la lista a cada lado del pivote, de manera que a un lado queden todos los menores que él, y al otro los mayores. En este momento, el pivote ocupa exactamente el lugar que le corresponderá en la lista ordenada.
La lista queda separada en dos sublistas, una formada por los elementos a la izquierda del pivote, y otra por los elementos a su derecha.
Repetir este proceso de forma recursiva para cada sublista mientras éstas contengan más de un elemento. Una vez terminado este proceso todos los elementos estarán ordenados. Como se puede suponer, la eficiencia del algoritmo depende de la posición en la que termine el pivote elegido.
En el mejor caso, el pivote termina en el centro de la lista, dividiéndola en dos sublistas de igual tamaño. En este caso, el orden de complejidad del algoritmo es O(n·log n).
En el peor caso, el pivote termina en un extremo de la lista. El orden de complejidad del algoritmo es entonces de 0(n²). El peor caso dependerá de la implementación del algoritmo, aunque habitualmente ocurre en listas que se encuentran ordenadas, o casi ordenadas.
En el caso promedio, el orden es O(n·log n).
<p>

![image](https://user-images.githubusercontent.com/6539267/65119961-c5065780-d9a1-11e9-8e44-bafef5f1857c.png)

## cabeceras necesarias
```c++
#include<iostream>
#include "SortingMethods.hh"
#include<time.h>
#include<iomanip>
```

## Calculo del tiempo de ejcución

Se tomó la función Time que es parte de la libreria de STL y usa la cabecera de time.h.
Ejemplo:
```c++
time_t start, end;
 
std::cout << "\nQuick Sort:" << std::endl;
std::time(&start);
SortingMethods::QuickSort(arr, 0, size - 1);
std::time(&end); 
double timeTaken = double(end - start); 
std::cout << "Time taken by program is : " << std::fixed 
     << timeTaken << std::setprecision(20);
std::cout << " sec " << std::endl;
```

## Analisis

|N|Shellsort| Selectionsort|Heapsort| Quicksort|
| :--- | :---: | :---: | :---: | :---: |
|10     | 0 s | 0 s | 0 s |  0 s|
|100     | 0 s | 0 s | 0 s | 0 s |
|1000    | 0 s | 0 s | 0 s | 0 s |
|100000  | 0 s | 0 s | 0 s | 0 s |
|1000000 | 0 s | 11 s | 0 s  | 1 s |
|10000000 | 0 s | ∞ | 1 s | 21 s |


![image](https://user-images.githubusercontent.com/6539267/65085982-f6146700-d964-11e9-8afc-d465623352e6.png)

No puede graficar un valor infinito o indefinido, así que lo reprersenté con un número inalcanzable

![image](https://user-images.githubusercontent.com/6539267/65085929-bf3e5100-d964-11e9-8815-f285468ddac3.png)


![image](https://user-images.githubusercontent.com/6539267/65085820-64a4f500-d964-11e9-873f-f20629bfddaf.png)


![image](https://user-images.githubusercontent.com/6539267/65085765-2576a400-d964-11e9-991e-542491a91b0e.png)
