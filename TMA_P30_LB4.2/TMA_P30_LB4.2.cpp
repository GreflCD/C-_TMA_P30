#include <iostream>
#include <math.h>
#include <windows.h>

int input()
{
    int chisla;
    std::cin >> chisla;
    if (chisla % 10 == chisla % 100 || chisla % 1000 == chisla % 100 || chisla % 10 == chisla % 1000)
    {
        std::cout << "Вы ввели одинаковые числа, пожалуйста введите заново... ";
        input();
    }
    return chisla;
}

schet(int chisla)
{
    int k;
    if (chisla % 100 > chisla % 10 > chisla % 100)
        k = chisla % 10;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введите 3 разных числа без пробелов, точек и запятых: ";
    int chisla;
    chisla = input();
    int itog;
    itog = schet(chisla);

    return 0;
}

