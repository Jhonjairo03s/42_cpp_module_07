/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:24:14 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/22 19:17:30 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    printElement(const int& n)
{
    std::cout << n << ", ";
}

void    printElement(const std::string& s)
{
    std::cout << s << ", ";
}

int main(void)
{
    size_t  length;

    int numbers[] = {10, 20, 30, 40};
    length = sizeof(numbers) / sizeof(numbers[0]);
    if (length == 0)
    {
        std::cerr << "Array with no elements" << '\n';
        return (1);
    }
    iter(numbers, length, static_cast<void(*)(const int&)>(printElement));
    std::cout << '\n';

    std::string arr[] = {"Hola", "Mundo", "Cruel"};
    length = sizeof(arr) / sizeof(arr[0]);
    if (length == 0)
    {
        std::cerr << "Array with no elements" << '\n';
        return (1);
    }
    iter(arr, length, static_cast<void(*)(const std::string&)>(printElement));
    std::cout << '\n';

    return (0);
}
