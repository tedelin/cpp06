/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:45:42 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/20 11:38:57 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy) {}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	(void) rhs;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}