/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify_real_type.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:17:43 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/09 02:43:55 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify_real_type.hpp"

Base *generate(void)
{
    int i = rand() % 3;
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

void indentify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void indentify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Unknown type" << std::endl;
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Unknown type" << std::endl;
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Unknown type" << std::endl;
    }
}

int main(void)
{
    srand(time(NULL)); // seed random number generator with current time to get different results each time program is run if we don't use it, we will get the same result each time we run the program
    Base *base = generate();
    indentify(base);
    indentify(*base);
    delete base;
    return (0);
}
