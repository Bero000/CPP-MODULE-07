#include "iter.hpp"

int main()
{
    std::cout << "------------ | ------------" << std::endl;
    {
        int a[3] = {1,2,3};
        ::iter(a,3, iterator_for_us);
    }
    std::cout << "------------ | ------------" << std::endl;
    {
        std::string b[5] = {"33","66","23"};
        ::iter(b,3, iterator_for_us);
    }
    std::cout << "------------ | ------------" << std::endl;
        {
        bool b[5] = {true,false,true};
        ::iter(b,3, iterator_for_us);
    }
    std::cout << "------------ | ------------" << std::endl;
}