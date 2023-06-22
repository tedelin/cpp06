/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:45:39 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 16:50:50 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <limits>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <sstream>

bool	convertSpecial(const std::string& s);
bool	is_int(const std::string& s);
bool	is_char(const std::string& s);
bool	is_double(const std::string& s);
bool	is_float(const std::string& s);

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& cpy);
		ScalarConverter&	operator=(const ScalarConverter& rhs);
		~ScalarConverter();

		static void	convert(const std::string& s);
		static void convertAndPrintInt(int value);
		static void convertAndPrintChar(char value);
		static void convertAndPrintFloat(float value);
		static void convertAndPrintDouble(double value);
};

#endif