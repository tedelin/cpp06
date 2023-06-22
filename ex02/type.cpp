/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:56:28 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/22 16:32:09 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base* generate(void)
{
	srand (time(NULL));

	int my_class = rand() % 3 + 1;
	if (my_class == 1)
		return (new A);
	else if (my_class == 2)
		return (new B);
	return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C" << std::endl;
}

void identify(Base& p)
{
	try {
		A& ref = dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
		(void) ref;
	}
	catch(std::exception& e)
	{
		try {
			B& ref = dynamic_cast<B&>(p);
			std::cout << "Class B" << std::endl;
			(void) ref;
		}
		catch(std::exception& e) {
			C& ref = dynamic_cast<C&>(p);
			std::cout << "Class C" << std::endl;
			(void) ref;
		}
	}
}
