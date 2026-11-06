/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <cstring>

int main() 
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const char* secretWord = "малина";
    char guess[50];

    do 
    {
        std::cout << "Угадайте слово: ";
        std::cin >> guess;

        if (strcmp(guess, secretWord) == 0) {
            std::cout << "Правильно! Вы победили! Загаданное слово — " << secretWord << std::endl;
        }
        else 
        {
            std::cout << "Неправильно" << std::endl;
        }

    } while (strcmp(guess, secretWord) != 0);

    return 0;
}
*/

#include <iostream>
#include <windows.h>
#include <string>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::string secretWord = "малина";
    std::string guess;

    do {
        std::cout << "Угадайте слово: ";
        std::cin >> guess;

        if (guess == secretWord) {
            std::cout << "Правильно! Вы победили! Загаданное слово — " << secretWord << std::endl;
        }
        else {
            std::cout << "Неправильно" << std::endl;
        }

    } while (guess != secretWord);

    return 0;
}