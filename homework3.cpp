#include <iostream>

int main()
{
    int z = 10;

    for (int i = 1; i <= z; ++i)
    {
        if (i % 2 == 0)
        {
            std::cout << i;
        }

    }
    std::cout << "\n";
    for (int i = 1; i <= z; i++)
    {
        if (i % 2 == 1)
        {
            std::cout << i;
        }
    }
    std::cout << "\n";
    for (int i = 1; i <= z; i++)
    {
        if (i % 2 == 1)
        {
            std::cout << "Нечетное число -"<< i << "\n";
        }
        else
        {
            std::cout << "Четное число -" << i << "\n";
        }
    }
}

