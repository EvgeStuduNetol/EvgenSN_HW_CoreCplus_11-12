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

    int rows, cols;
    file >> rows >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) 
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            file >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = cols - 1; j >= 0; j--) 
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) 
    {
        delete[] arr[i];
    }

    delete[] arr;

    file.close();

    return 0;
}