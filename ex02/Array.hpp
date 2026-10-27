/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 19:50:00 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/27 14:01:57 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>

class   Array
{
    private:
        T*              _elements;
        unsigned int    _size;

    public:
        Array() : _elements(NULL), _size(0)
        {
            std::cout << "Default Constructor Called" << '\n';
        }
        Array(unsigned int n) : _elements(new T[n]()), _size(n)
        {
        }
        Array(const Array& other) : _elements(new T[other._size]()), _size(other._size)
        {
            std::cout << "Constructor Copy Called" << '\n';
            for (unsigned int i = 0; i < _size; i++)
                this->_elements[i] = other._elements[i];
        }
        Array& operator=(const Array& other)
        {
            std::cout << "Copy assignment operator called" << '\n';
            if (this != &other)
            {
                if (this->_elements)
                    delete[] this->_elements;
                this->_size = other._size;
                this->_elements = new T[this->_size]();
                for (unsigned int index = 0; index < this->_size; index++)
                    this->_elements[index] = other._elements[index];
            }
            return (*this);
        }
        ~Array()
        {
            std::cout << "Destructor called" << '\n';
            if (this->_elements)
                delete[] this->_elements;
        }
        T& operator[](unsigned int index)
        {
            if (index >= this->_size)
                throw OutOfBoundsException();
            return (this->_elements[index]);
        }
        const T& operator[](unsigned int index) const
        {
            if (index >= this->_size)
                throw OutOfBoundsException();
            return (this->_elements[index]);
        }
        unsigned int size() const
        {
            return (this->_size);
        }
        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Index is out of bounds!");
                }
        };
};

#endif
