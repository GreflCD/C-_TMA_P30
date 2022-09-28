#include <iostream>
#include <math.h>
#include <windows.h>

int input()
{
    std::cout << "Введите 3 разных числа без пробелов, точек и запятых, нельзя начинать с нуля: " << std::endl;
    int chisla;
    std::cin >> chisla;
    if (chisla < 100 || chisla > 1000)
    {
        std::cout << "Вы ввели больше, либо меньше 3 чисел, либо начали с нуля, пожалуйста введите заново... " << std::endl;
        input();
    }
    if (chisla % 10 == div(chisla % 100, 10).quot || div(chisla % 100, 10).quot == div(chisla, 100).quot || chisla % 10 == div(chisla, 100).quot)
    {
        std::cout << "Вы ввели одинаковые числа, пожалуйста введите заново... " << std::endl;
        input();
    }
    return chisla;
}

int schet(int chisla)
{
    int k(0);
    if (div(chisla, 100).quot > chisla % 10 && chisla % 10 > div(chisla % 100, 10).quot)
    {
        k = chisla % 10;
    }

    if (div(chisla % 100, 10).quot > chisla % 10 && chisla % 10 > div(chisla, 100).quot)
    {
        k = chisla % 10;
    }

    if (chisla % 10 > div(chisla % 100, 10).quot && div(chisla % 100, 10).quot > div(chisla, 100).quot)
    {
        k = div(chisla % 100, 10).quot;
    }

    if (div(chisla, 100).quot > div(chisla % 100, 10).quot && div(chisla % 100, 10).quot > chisla % 10)
    {
        k = div(chisla % 100, 10).quot;
    }

    if (chisla % 10 > div(chisla, 100).quot && div(chisla, 100).quot > div(chisla % 100, 10).quot)
    {
        k = div(chisla, 100).quot;
    }

    if (div(chisla % 100, 10).quot > div(chisla, 100).quot && div(chisla, 100).quot > chisla % 10)
    {
        k = div(chisla, 100).quot;
    }
    std::cout << k;
    return k;
}

int output(int itog)
{
    std::cout << "Среднее число: " << itog;
    return itog;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int chisla;
    chisla = input();

    int itog;
    itog = schet(chisla);

    output(itog);
    return 0;
}

