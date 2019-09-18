![image](https://user-images.githubusercontent.com/6539267/65068603-ce5dd880-d93d-11e9-9d11-0a0033b192d9.png)


# Actividad Integradora 9 

## Shellsort

<p align="justify">
El ordenamiento Shell, denomino así por su desarrollador Donald Shell (1959), ordena una estructura de una manera similar a la del Bubble Sort, sin embargo no ordena elementos adyacentes sino que utiliza una segmentación entre los datos. Esta segmentación puede ser en cualquier tamaño de acuerdo a una secuencia de valores que empiezan con un valor grande y van disminuyendo hasta llegar al '1'.

El ShellSort ordena subgrupos de elementos separados K unidades (respecto de su posición en el arreglo) del arreglo o lista original. El valor K es llamado incremento.

Después de que los primeros K subgrupos han sido ordenados (generalmente se utiliza inserción directa), se escoge un nuevo valor de K más pequeño, y el arreglo es de nuevo partido entre el nuevo conjunto de subgrupos. Cada uno de los subgrupos mayores es ordenado y el proceso se repite de nuevo con un valor más pequeño de K, como en la grafica de arriba.
</p>

![image](https://user-images.githubusercontent.com/6539267/65117231-95a21b80-d99e-11e9-8498-e8389520c19f.png)

<p aling="justify">
El ordenamiento por selección mejora el ordenamiento burbuja haciendo un sólo intercambio por cada pasada a través de la lista. Para hacer esto, un ordenamiento por selección busca el valor mayor a medida que hace una pasada y, después de completar la pasada, lo pone en la ubicación correcta. Al igual que con un ordenamiento burbuja, después de la primera pasada, el ítem mayor está en la ubicación correcta. Después de la segunda pasada, el siguiente mayor está en su ubicación. Este proceso continúa y requiere n−1 pasadas para ordenar los n ítems, ya que el ítem final debe estar en su lugar después de la (n−1)-ésima pasada.
</p>

![image](https://user-images.githubusercontent.com/6539267/65117993-6c35bf80-d99f-11e9-8f53-e178c7d23752.png)


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
