/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:45:42 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 16:53:46 by tedelin          ###   ########.fr       */
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

void ScalarConverter::convert(const std::string& s)
{
	if (convertSpecial(s))
		return;
	if (is_int(s)) {
		int value = atoi(s.c_str());
		convertAndPrintInt(value);
	}
	else if (is_float(s)) {
		std::istringstream iss(s);
		float value;
		iss >> value;
		convertAndPrintFloat(value);
	}
	else if (is_double(s)) {
		std::istringstream iss(s);
		double value;
		iss >> value;
		convertAndPrintDouble(value);
	}
	else if (is_char(s)) {
		char value = s[0];
		convertAndPrintChar(value);
	}
	else {
		std::cout << "Conversion error" << std::endl;
	}
}

void ScalarConverter::convertAndPrintInt(int value)
{
	char c_value = static_cast<char>(value);
	double d_value = static_cast<double>(value);
	float f_value = static_cast<float>(value);
	int i_value = static_cast<int>(value);

	std::cout << "char: " << (value > 127 || value < 0 ? "impossible" : (isprint(c_value) ? "'" + std::string(1, c_value) + "'" : "Non displayable")) << std::endl;
	std::cout << "int: " << i_value << std::endl;
	std::cout << "float: " << f_value << (f_value == i_value ? ".0f" : "f") << std::endl;
	std::cout << "double: " << d_value << (d_value == i_value ? ".0" : "") << std::endl;
}

void ScalarConverter::convertAndPrintFloat(float value)
{
	char c_value = static_cast<char>(value);
	double d_value = static_cast<double>(value);
	int i_value = static_cast<int>(value);

	std::cout << "char: " << (value > 127 || value < 0 ? "impossible" : (isprint(c_value) ? "'" + std::string(1, c_value) + "'" : "Non displayable")) << std::endl;
	if (value < std::numeric_limits<int>::max() && value > std::numeric_limits<int>::min())
		std::cout << "int: " << i_value << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << value << (value == i_value ? ".0f" : "f") << std::endl;
	std::cout << "double: " << d_value << (d_value == i_value ? ".0" : "") << std::endl;
}

void ScalarConverter::convertAndPrintDouble(double value)
{
	char c_value = static_cast<char>(value);
	float f_value = static_cast<float>(value);
	int i_value = static_cast<int>(value);

	std::cout << "char: " << (value > 127 || value < 0 ? "impossible" : (isprint(c_value) ? "'" + std::string(1, c_value) + "'" : "Non displayable")) << std::endl;
	if (value < std::numeric_limits<int>::max() && value > std::numeric_limits<int>::min())
		std::cout << "int: " << i_value << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f_value << (f_value == i_value ? ".0f" : "f") << std::endl;
	std::cout << "double: " << value << (value == i_value ? ".0" : "") << std::endl;
}

void ScalarConverter::convertAndPrintChar(char value)
{
	double d_value = static_cast<double>(value);
	float f_value = static_cast<float>(value);
	int i_value = static_cast<int>(value);

	std::cout << "char: " << (value > 127 || value < 0 ? "impossible" : (isprint(value) ? "'" + std::string(1, value) + "'" : "Non displayable")) << std::endl;
	std::cout << "int: " << i_value << std::endl;
	std::cout << "float: " << f_value << (f_value == i_value ? ".0f" : "f") << std::endl;
	std::cout << "double: " << d_value << (d_value == i_value ? ".0" : "") << std::endl;
}

ScalarConverter::~ScalarConverter() {}