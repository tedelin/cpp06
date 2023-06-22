/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:49:57 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 14:53:31 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data* data = new Data;
	data->s1 = "Hello";
	data->n = 42;
	data->s2 = "World";

	uintptr_t raw = Serializer::serialize(data);
	Data* data2 = Serializer::deserialize(raw);

	std::cout << data2->s1 << std::endl;
	std::cout << data2->n << std::endl;
	std::cout << data2->s2 << std::endl;

	delete data;
	return 0;
}