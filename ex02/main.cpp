/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:14:59 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 15:20:54 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int main()
{
	Base* first = generate();
	Base* second = generate();
	Base* third = generate();

	identify(first);
	identify(second);
	identify(third);

	delete first;
	delete second;
	delete third;
}