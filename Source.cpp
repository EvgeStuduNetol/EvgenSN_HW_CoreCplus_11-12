#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

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

    
    std::string word;
    while (file >> word) 
    {  
        std::cout << word << std::endl;
    }

    
    file.close();

    return 0;
}