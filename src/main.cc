#include<iostream>
#include "SortingMethods.hh"
#include<time.h>
#include<iomanip>

const int size = 1000000; 
int arr[size];

void PopulateArray( int ar[], int n )
{
    for( int i = 0 ; i < n ; ++i ) ar[i] = std::rand() % 50 + 1 ;
}

int main()
{
    PopulateArray(arr, size);
    time_t start, end;

    std::cout << "Sorting methods" << std::endl;
    
    /*std::time(&start);
    SortingMethods::ShellSort(arr, size);
    std::time(&end); 
    double timeTaken = double(end - start); 
    std::cout << "Time taken by program is : " << std::fixed 
         << timeTaken << std::setprecision(5);
    std::cout << " sec " << std::endl;

    std::cout << "\nShell Sort:" << std::endl;*/

    /*for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }*/
    /*std::cout << "\nSelection Sort:" << std::endl;
    std::time(&start);
    SortingMethods::SelectionSort(arr, size);
    std::time(&end); 
    double timeTaken = double(end - start); 
    std::cout << "Time taken by program is : " << std::fixed 
         << timeTaken << std::setprecision(5);
    std::cout << " sec " << std::endl;*/
    /*for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }*/
    /*std::cout << "\nHeap Sort:" << std::endl;
    std::time(&start);
    SortingMethods::HeapSort(arr, size);
    std::time(&end); 
    double timeTaken = double(end - start); 
    std::cout << "Time taken by program is : " << std::fixed 
         << timeTaken << std::setprecision(20);
    std::cout << " sec " << std::endl;*/
    /*for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }*/
    std::cout << "\nQuick Sort:" << std::endl;
    std::time(&start);
    SortingMethods::QuickSort(arr, 0, size - 1);
    std::time(&end); 
    double timeTaken = double(end - start); 
    std::cout << "Time taken by program is : " << std::fixed 
         << timeTaken << std::setprecision(20);
    std::cout << " sec " << std::endl;
   /* for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }*/
    std::getchar();
    return 0;
}