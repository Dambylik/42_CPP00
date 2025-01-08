/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:41:48 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/13 12:14:55 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class	Contact {


private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
	
		
public:

	Contact( void );
	~Contact( void );
		
	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getPhone( void ) const;
	std::string	getSecret( void ) const;
	
	void		setFirstName( std::string str );
	void		setLastName( std::string str );
	void		setNickname( std::string str );
	void		setPhone( std::string str );
	void		setSecret( std::string str );
};
