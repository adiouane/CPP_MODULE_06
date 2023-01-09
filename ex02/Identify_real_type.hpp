/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify_real_type.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:18:05 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/09 02:25:18 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_REAL_TYPE_HPP
# define IDENTIFY_REAL_TYPE_HPP

# include <iostream>
#include <exception>

class Base
{
    public:
        virtual ~Base(void) {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *generate(void);
void indentify(Base *p);
void indentify(Base &p);


#endif