/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:00:12 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/13 15:03:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// ---------------------------------------------------------------> Constructor

Phonebook::Phonebook( void ) {
	
    this->_index = 0;
	std::cout << GREEN << WELCOME << std::endl;
	std::cout << GREEN << INCREDIBLE << std::endl;
	
}
// ---------------------------------------------------------------> Destructor

Phonebook::~Phonebook( void ) {
	
    std::cout << RED << CIAO << std::endl;
}

// ---------------------------------------------------------------> Validate Input

std::string Phonebook::getValidatedInput( const std::string& input ) {
    
    std::string str;
    while (!std::cin.eof())
    {
        std::cout << BLUE << "Enter a " << input << RESET;
        if (std::getline(std::cin, str))
        {
            str = trim(str);
            if (!str.empty())
                return (str);
        }
        std::cout << RED << ENTER << RESET << std::endl;
    }
    return ("");
}

// ---------------------------------------------------------------> Add Contact

void Phonebook::add( void ) {
    
	int currentIndex;
    
    if (this->_index > 7)
    {
        std::cout << RED << SPACE << RESET << std::endl;
        std::cout << RED << OVERWRITE
                  << this->_contacts[this->_index % 8].getFirstName()
                  << RESET << std::endl;
    }
    
    currentIndex = this->_index % 8;
    this->_contacts[currentIndex].setFirstName(getValidatedInput(FIRST));
    this->_contacts[currentIndex].setLastName(getValidatedInput(LAST));
    this->_contacts[currentIndex].setNickname(getValidatedInput(NICK));
    this->_contacts[currentIndex].setPhone(getValidatedInput(PHONE));
    this->_contacts[currentIndex].setSecret(getValidatedInput(SECRET));

    std::cout << GREEN << SUCCES << RESET << std::endl;

    this->_index++;
}

// ----------------------------------------------------> Print Contact

void	Phonebook::print( Contact contact ) {
    
	std::cout << GREEN << "Search result :" << RESET << std::endl;
	if (!contact.getFirstName().size())
	{
		std::cout << RED << "Contact doesn't exist!" << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << FIRST << RESET << contact.getFirstName() << std::endl;
	std::cout << BLUE << LAST << RESET << contact.getLastName() << std::endl;
	std::cout << BLUE << NICK << RESET << contact.getNickname() << std::endl;
	std::cout << BLUE << PHONE << RESET << contact.getPhone() << std::endl;
	std::cout << BLUE << SECRET << RESET << contact.getSecret() << std::endl;
}

// ----------------------------------------------------> Get Contact

Contact	Phonebook::getContact( int index )
{
	return (this->_contacts[index % 8]);
}

// ----------------------------------------------------> Search Contact

void Phonebook::search( void )
{
    std::string str;

    if (!search_in_phonebook(this->_contacts))
    {
        std::cout << RED << EMPTY << RESET << std::endl;
        return;
    }
    while (!std::cin.eof())
    {
        std::cout << BLUE << "Select an index: " << RESET;
        if (std::getline(std::cin, str))
        {
            str = trim(str); 
            if (str.empty())
            {
                std::cout << RED << ENTER << RESET << std::endl;
                continue;
            }
            if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' &&
                this->_contacts[str[0] - 1 - '0'].getFirstName().size())
            {
                break;
            }
            std::cout << RED << "Invalid index!" << RESET << std::endl;
        }
    }
    if (!std::cin.eof())
    {
        this->print(this->_contacts[str[0] - 1 - '0']);
    }
}

   