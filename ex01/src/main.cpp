/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:41:53 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/13 14:02:00 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main( void ) {
	
	Phonebook 	phonebook;
	std::string	str;

	std::signal( SIGQUIT, SIG_IGN );
	while ( str != "EXIT" ) {

		std::cout << BLUE << "Enter a command ADD, SEARCH or EXIT > " << RESET;
		std::getline( std::cin, str );
		if ( str == "ADD" )
			phonebook.add();
		else if ( str == "SEARCH" )
			phonebook.search();
		if ( std::cin.eof() ) {
			std::cout << std::endl;
			return (0);
		}
	}
	std::cout << RED << "Exiting the phonebook. All contacts are lost forever." << RESET << std::endl;
	std::cout<< std::endl;
	return (0);
}
