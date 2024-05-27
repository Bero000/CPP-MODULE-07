#include "Array.hpp"

int main()
{
    Array<int> numbers(10);
    int* mirror = new int[10];
    std::srand(std::time(nullptr));
    for (int i = 0; i < 10; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> tmp2(tmp);
    }

    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        if (mirror[i] / 10000000 > 0)
            std::cout << mirror[i] / 10000000 << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << ">> Error: Can'te be same value!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        numbers[10] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete [] mirror;
}
