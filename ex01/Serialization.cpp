/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:05:13 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/09 01:22:08 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
  return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data data;
	data.n = 1337;
	data.str = "adiouane";

	uintptr_t serialized = serialize(&data);
	Data *deserialized = deserialize(serialized);


	// deserialized->n = 1996;
	// deserialized->str = "amine diouane";
	// std::cout << "Original data:" << std::endl;
	// std::cout << "n: " << data.n << std::endl;
	// std::cout << "str: " << data.str << std::endl;
	// std::cout << "Deserialized data:" << std::endl;
	// std::cout << "n: " << deserialized->n << std::endl;
	// std::cout << "str: " << deserialized->str << std::endl;
	// std::cout << &data << " = " << deserialized << std::endl;

	if (deserialized == &data)
		std::cout << "Success: original and deserialized pointers match" << std::endl;
	else
		std::cout << "Error: original and deserialized pointers do not match" << std::endl;
  	return 0;
}
