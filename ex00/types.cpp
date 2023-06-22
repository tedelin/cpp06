/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:08:39 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 16:29:22 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	convertSpecial(const std::string& s)
{
	if (s == "-inff" || s =="+inff" || s == "nanf" || s == "-inf" || s == "+inf" || s == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << s << (s == "nanf" || s == "-inff" || s == "+inff" ? "" : "f") << std::endl;
		std::cout << "double: " << (s == "nanf" ? "nan" : s) << std::endl;
		return (true);
	}
	return (false);
}

bool	is_int(const std::string& s)
{
	int	i = -1;
	
	if (s[0] == '-' || s[0] == '+') {
		i++;
	}
	while (s[++i])
	{
		if (!isdigit(s[i])) {
			return (false);
		}
	}
	std::istringstream iss(s);
    int value;
    iss >> value;
    if (iss.fail() || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()) {
		return false;
	}
	return (true);
}

bool	is_char(const std::string& s)
{
	if (s.size() == 1 && isdigit(s[0]) == false) {
		return (true);
	}
	return (false);
}

bool	is_double(const std::string& s)
{
	unsigned long	i = -1;
	int flag = 0;
	
	if (s[0] == '-')
		i++;
	while ((isdigit(s[++i]) || s[i] == '.') && flag <= 1)
	{
		if (s[i] == '.')
			flag++;
	}
	if (flag != 1 || i != s.size())
		return (false);
	std::istringstream iss(s);
    double value;
    iss >> value;
    if (iss.fail() || value > std::numeric_limits<double>::max() || value < -std::numeric_limits<double>::max()) {
        return false;
	}
	return (true);
}

bool	is_float(const std::string& s)
{
	unsigned long	i = -1;
	int flag = 0;
	
	if (s[0] == '-')
		i++;
	while ((isdigit(s[++i]) || s[i] == '.') && flag <= 1)
	{
		if (s[i] == '.')
			flag++;
	}
	if (flag != 1 || i != s.size() - 1 || s[i] != 'f')
		return (false);
	std::istringstream iss(s);
    float value;
    iss >> value;
  	if (iss.fail() || value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max()) {
    	return false;
	}
	return (true);
}