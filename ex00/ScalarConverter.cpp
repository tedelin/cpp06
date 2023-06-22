/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:45:42 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 14:26:48 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy) {(void) cpy;}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	(void) rhs;
	return (*this);
}

void	ScalarConverter::convert(const std::string& s)
{
	if (convertSpecial(s) == true)
		return ;
	if (is_int(s) == true) {
		int value = atoi(s.c_str());
		char c_value = static_cast<char>(value);
		double d_value = static_cast<double>(value);
		float f_value = static_cast<float>(value);
		std::cout << "char: " << (value > 127 ? "impossible" : (isprint(c_value) ? "'" + std::string(1, c_value) + "'" : "Non displayable")) << std::endl;
		std::cout << "int: " << value << std::endl;
		std::cout << "float: " << f_value << (f_value == value ? ".0f" : "f") << std::endl;
		std::cout << "double: " << d_value << (d_value == value ? ".0" : "") << std::endl;
	}
	else if (is_float(s) == true) {
		std::istringstream iss(s);
		float value;
		iss >> value;
		char c_value = static_cast<char>(value);
		double d_value = static_cast<double>(value);
		int i_value = static_cast<int>(value);
		std::cout << "char: " << (value > 127 ? "impossible" : (isprint(c_value) ? "'" + std::string(1, c_value) + "'" : "Non displayable")) << std::endl;
		std::cout << "int: " << i_value << std::endl;
		std::cout << "float: " << value << (value == i_value ? ".0f" : "f") << std::endl;
		std::cout << "double: " << d_value << (d_value == i_value ? ".0" : "") << std::endl;
	}
	else if (is_double(s) == true) {
		std::istringstream iss(s);
		double value;
		iss >> value;
		char c_value = static_cast<char>(value);
		float f_value = static_cast<float>(value);
		int i_value = static_cast<int>(value);
		std::cout << "char: " << (value > 127 ? "impossible" : (isprint(c_value) ? "'" + std::string(1, c_value) + "'" : "Non displayable")) << std::endl;
		std::cout << "int: " << i_value << std::endl;
		std::cout << "float: " << f_value << (f_value == i_value ? ".0f" : "f") << std::endl;
		std::cout << "double: " << value << (value == i_value ? ".0" : "") << std::endl;
	}
	else if (is_char(s) == true) {
		char value = s[0];
		double d_value = static_cast<double>(value);
		float f_value = static_cast<float>(value);
		int i_value = static_cast<int>(value);
		std::cout << "char: " << (value > 127 ? "impossible" : (isprint(value) ? "'" + std::string(1, value) + "'" : "Non displayable")) << std::endl;
		std::cout << "int: " << i_value << std::endl;
		std::cout << "float: " << f_value << (f_value == i_value ? ".0f" : "f") << std::endl;
		std::cout << "double: " << d_value << (d_value == i_value ? ".0" : "") << std::endl;
	}
	else
		std::cout << "Conversion error" << std::endl;
}

ScalarConverter::~ScalarConverter() {}