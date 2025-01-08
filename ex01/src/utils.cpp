/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:58:49 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/12 17:19:16 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	add_space(int n)
{
std::string	str;

while (n)
{
	str.append(" ");
	n--;
}
	
return (str);

}

std::string	setWidth(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

std::string trim(const std::string& line)
{
    const char* WhiteSpace = " \t\v\r\n";
    std::size_t start = line.find_first_not_of(WhiteSpace);

    if (start == std::string::npos)
	{
		return ("");
	}  
	else
        return (line.substr(start));
}

int	search_in_phonebook(Contact contacts[8])
{
	char		c;
	int			i;
	std::string	str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	c = '1';
	i = 1;
	while (c <= '8')
	{
		if (contacts[c - 1 - '0'].getFirstName().size() && i)
		{
			std::cout << "|";
            std::cout << std::setw(10) << std::right << c;
            
            str = setWidth(contacts[c - 1 - '0'].getFirstName(), 10); 
            std::cout << "|" << std::setw(10) << std::right << str;

            str = setWidth(contacts[c - 1 - '0'].getLastName(), 10);
            std::cout << "|" << std::setw(10) << std::right << str;

            str = setWidth(contacts[c - 1 - '0'].getNickname(), 10);
            std::cout << "|" << std::setw(10) << std::right << str;
            
            std::cout << "|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			}
		c++;
		i++;
		
	}
	std::cout << " ___________________________________________ " << std::endl;
	return (i);
}
