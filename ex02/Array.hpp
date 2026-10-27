/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 19:50:00 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/26 14:57:21 by jhvalenc         ###   ########.fr       */
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
        // Constructor por defecto
        Array() : _elements(NULL), _size(0) {}

        // Constructor parametrizado (El truco () al final inicializa por defecto)
        Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

        // Constructor de Copia
        Array(const Array& other) : _elements(new T[other._size]()), _size(other._size)
        {
            for (unsigned int i = 0; i < _size; i++)
                this->_elements[i] = other._elements[i];
        }

        // Operador de Asignación
        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                // Primero liberamos la memoria vieja
                if (this->_elements)
                    delete[] this->_elements;

                // Asignamos el nuevo tamaño y memoria
                this->_size = other._size;
                this->_elements = new T[this->_size]();

                // Copiamos los datos (Copia Profunda)
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_elements[i] = other._elements[i];
            }
            return (*this);
        }

        // Destructor
        ~Array()
        {
            if (this->_elements)
                delete[] this->_elements;
        }

        // Operador de subíndice (lectura y escritura)
        T& operator[](unsigned int index)
        {
            if (index >= this->_size)
                throw OutOfBoundsException();
            return (this->_elements[index]);
        }

        // Operador de subíndice constante (solo lectura para objetos const)
        const T& operator[](unsigned int index) const
        {
            if (index >= this->_size)
                throw OutOfBoundsException();
            return (this->_elements[index]);
        }

        // Función size
        unsigned int size() const
        {
            return (this->_size);
        }

        // Excepción personalizada
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
