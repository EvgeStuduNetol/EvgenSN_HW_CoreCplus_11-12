#include <iostream>
#include <fstream>
#include <windows.h>


int main() 
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::ifstream file("in.txt");

    
    if (!file.is_open()) 
    {
        std::cout << "Ошибка: файл не найден!" << std::endl;
        return 1;  
    }

    int size;
    file >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) 
    {
        file >> arr[i];
    }

    for (int i = size - 1; i >= 0; i--) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    file.close();

    return 0;
}