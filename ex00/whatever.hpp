/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:55:25 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/21 12:19:10 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename Type>
void    swap(Type& a, Type& b)
{
    Type    temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename Type>
Type    min(const Type& a, const Type& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename Type>
Type    max(const Type& a, const Type& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif
