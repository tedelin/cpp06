/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:14:59 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 15:58:48 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int main()
{
	Base* my = generate();
	Base& ref = *my;

	identify(my);
	identify(ref);

	delete my;
}