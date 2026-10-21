/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:55:28 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/21 12:13:57 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    // subject
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << '\n';
    std::cout << "min (a, b) = " << ::min ( 5, 5 ) << '\n';
    std::cout << "min (a, b) = " << ::min ( 1, 5 ) << '\n';
    std::cout << "min (a, b) = " << ::min ( 5, 1 ) << '\n';

    std::cout << '\n';
    std::cout << "max (e, f) = " << ::max<double>(23, 23.5) << '\n';
    return (0);
}
