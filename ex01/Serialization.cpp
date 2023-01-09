/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:05:13 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/10 00:19:24 by adiouane         ###   ########.fr       */
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

	if (deserialized == &data)
		std::cout << "Success: original and deserialized pointers match" << std::endl;
	else
		std::cout << "Error: original and deserialized pointers do not match" << std::endl;
  	return 0;
}
