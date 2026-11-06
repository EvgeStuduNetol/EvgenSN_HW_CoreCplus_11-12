//HomeWork C++ #11.1

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <cstring>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char firstName[50], lastName[50];
    char greeting[150];

    std::cout << "Введите имя: ";
    std::cin >> firstName;

    std::cout << "Введите фамилию: ";
    std::cin >> lastName;

    strcpy(greeting, "Здравствуйте, ");
    strcat(greeting, firstName);
    strcat(greeting, " ");
    strcat(greeting, lastName);
    strcat(greeting, "!");

    std::cout << greeting << std::endl;

    return 0;
}

/*
#include <iostream>
#include <windows.h>
#include <string>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::string firstName, lastName;

    std::cout << "Введите имя: ";
    std::cin >> firstName;

    std::cout << "Введите фамилию: ";
    std::cin >> lastName;

    // Конкатенация (склеивание) строк через оператор +
    std::string greeting = "Здравствуйте, " + firstName + " " + lastName + "!";

    std::cout << greeting << std::endl;

    return 0;
}
*/

