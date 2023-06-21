/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:08:39 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/21 16:42:09 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	is_int(const std::string str)
{
	int	i = -1;
	
	if (str[0] == '-' || str[0] == '+') {
		i++;
	}
	while (str[++i])
	{
		if (!isdigit(str[i])) {
			return (false);
		}
	}
	return (true);
}

bool	is_char(const std::string& str)
{
	if (str.size() == 1 && !isdigit(str[0]))
		return (true);
	return (false);
}

bool	is_double(const std::string& s)
{
	int	i = -1;
	int flag = 0;
	
	if (s && s[0] == '-')
		i++;
	while ((isdigit(s[++i]) || s[i] == '.') && flag <= 1)
	{
		if (s[i] == '.')
			flag++;
	}
	if (flag == 1 && i == s.size())
		return (true);
	return (false);
}

bool	is_float(const std::string& str)
{
}