/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:30:20 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/12 15:11:57 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
}

Contact::~Contact( void ) {
}

std::string	Contact::getFirstName( void ) const {

	return (this->_first_name);
}

std::string	Contact::getLastName( void ) const {

	return (this->_last_name);
}

std::string	Contact::getNickname( void ) const {

	return (this->_nickname);
}

std::string	Contact::getPhone( void ) const {

	return (this->_phone);
}

std::string	Contact::getSecret( void ) const {

	return (this->_secret);
}

void	Contact::setFirstName( std::string str ) {

	this->_first_name = str;
}

void	Contact::setLastName( std::string str ) {

	this->_last_name = str;
}

void	Contact::setNickname( std::string str ) {

	this->_nickname = str;
}

void	Contact::setPhone( std::string str ) {


	this->_phone = str;
}

void	Contact::setSecret( std::string str ) {

	this->_secret = str;
}
