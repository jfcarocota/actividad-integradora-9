#include<iostream>
#include "SortingMethods.hh"

int main()
{
    int arr[] = {5, 8, 1, 9, 4, 7, 3, 2, 6};
    int size = sizeof(arr)/sizeof(arr[0]); 
    std::cout << "Hello world" << std::endl;
    SortingMethods::ShellSort(arr, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::getchar();
    return 0;
}