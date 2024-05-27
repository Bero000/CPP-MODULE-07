#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iomanip>
template <typename T>
void iterator_for_us(T& value);

template <typename T>
void iter(T* a, unsigned int b, void(*f)(T& value))
{
    for(unsigned int i = 0; i < b; i++)
        (*f)(a[i]);
}
template <typename T>
void iterator_for_us(T& value)
{
    std::cout<< std::setw(14) << value << std::endl;
}


#endif