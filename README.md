![image](https://user-images.githubusercontent.com/6539267/65068603-ce5dd880-d93d-11e9-9d11-0a0033b192d9.png)


# Actividad Integradora 9 

## cabeceras necesarias
```c++
#include<iostream>
#include "SortingMethods.hh"
#include<time.h>
#include<iomanip>
```

## Calculo del tiempo de ejcución

Se tomo la función Time que es parte de la libreria de STL y usa la cabecera de time.h.
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

|N|Shell sort| Selection sort|Heap sort| Quicksort|
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
