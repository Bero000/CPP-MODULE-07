#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template <typename T>
class Array
{
    private:
        T* array;
        unsigned int _size;
    public:
        Array(): array(NULL), _size(0)
        {
            std::cout << "<<| Default constructor called."<<std::endl;
        };

        ~Array()
        {
            std::cout << "<<| Destructor called."<<std::endl;
            delete[] this->array;
        };

        Array(unsigned int n_value): array(new T[n_value]), _size(n_value)
        {
            std::cout << "<<| Params constructor called."<<std::endl;
        };

        Array(const Array<T> &cpy): array(new T[cpy.size()]), _size(cpy.size())
        {
            std::cout << "<<| Copy constructor called."<<std::endl;
            for (unsigned int i = 0; i < cpy.size(); i++)
                this->array[i] = cpy.array[i];
        };

        Array<T> operator= (const Array<T> &value)
        {
            std::cout << ">> Copy assign operator called."<<std::endl;
            if (this != &value)
            {
                delete[] this->array;
                this->_size = value.size();
                this->array = new T[this->size()];
                for (unsigned int i = 0; i < value.size(); i++)
                    this->array[i] = value.array[i];
            }
            return *this;
        };

        class outOfIndex : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return (">> Error: Out of index mate!");
                }
        };

        T& operator[](const unsigned int idx)
        {
            if (idx < 0 || idx >= this->_size)
                throw outOfIndex();
            return this->array[idx];
        }
        unsigned int size() const
        {
            return this->_size;
        }
};


#endif