/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:57:34 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/13 12:15:28 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include "utils.hpp"
#include <csignal>

class	Phonebook {
	
private:

	Contact		_contacts[8];
	int			_index;

public:

	Phonebook( void );
	~Phonebook( void );
		
	void		add( void );
	void		search( void );
	void		print( Contact contact );
	std::string getValidatedInput( const std::string& input );
	Contact		getContact( int i );
};
