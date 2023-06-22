/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:27:54 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 14:53:17 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <string>
# include <iostream>
# include <stdint.h>


struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer& cpy);
		Serializer&	operator=(const Serializer& rhs);
		~Serializer();

		static uintptr_t	serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};

#endif