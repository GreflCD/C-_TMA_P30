#include <iostream>
#include <math.h>
#include <windows.h>


double input_dni()
{
    std::cout << "Введите срок депозита в днях: ";
    double dni;
    std::cin >> dni;
    if (dni < 0 || dni != (long long)dni)
    {
        std::cout << "Введено отрицательное, либо не целочисленное количество дней пожалуйста введите заново..." << std::endl;
        input_dni();
    }

    return dni;
}

double input_sum()
{
    std::cout << "Введите сумму депозита: ";
    double sum;
    std::cin >> sum;
    if (sum < 0)
    {
        std::cout << "Сумма не может быть отрицательной, пожалуйста введите заново..." << std::endl;
        input_sum();
    }
    return sum;
}

double schet6(int dni, double sum)
{
    double itog6;
    itog6 = (sum * dni * 0.06) / 365;
    itog6 = itog6 / div(dni, 30).quot;
    return itog6;
}

double schet8(int dni, double sum)
{
    double itog8;
    itog8 = (sum * dni * 0.08) / 365;
    itog8 = itog8 / div(dni, 30).quot;
    return itog8;
}

double output(double a, double b)
{
    std::cout << "Ежемесячная выплата по депозиту под 6% годовых будет равна: " << a << std::endl;
    std::cout << "Ежемесячная выплата по депозиту под 8% годовых будет равна: " << b << std::endl;
    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Рассчёт суммы ежемесячных выплат по депозиту под 6%, 8% годовых." << std::endl;
    double dni;
    double sum;
    dni = input_dni();
    sum = input_sum();
    double itog6, itog8;
    itog6 = schet6(dni, sum);
    itog8 = schet8(dni, sum);
    output(itog6, itog8);

    return 0;
}