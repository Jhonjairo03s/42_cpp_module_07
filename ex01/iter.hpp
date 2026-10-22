/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:17:59 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/22 13:39:21 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template <typename Type, typename Func>
void    iter(Type* array, size_t len, Func function)
{
    size_t  index;

    index = 0;
    while (index < len)
    {
        function(array[index]);
        index++;
    }
}

void    printElement(const int& n);
void    printElement(const std::string& s);

#endif
