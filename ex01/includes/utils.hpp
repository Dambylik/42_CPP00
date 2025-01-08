/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:05:33 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/12 17:19:21 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

std::string setWidth(std::string str, long unsigned max);
int	 search_in_phonebook(Contact contacts[8]);
std::string trim(const std::string& line);

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0;0m"

#define WELCOME "✨ Welcome to your wonderful Phonebook! ✨"
#define INCREDIBLE "It can handle up to 8 contacts! Crazy, non ? 🤯" 
#define FIRST "First Name: "
#define LAST "Last Name: "
#define NICK "Nickname: "
#define PHONE "Phone number: "
#define SECRET "Darkest Secret: "
#define WARNING "Warning! Error encountered!\n"
#define ENTER "For God's sake enter something!"
#define SUCCES "Contact successfully added!"
#define SPACE "Warning: i have a limited space! "
#define OVERWRITE "I will overwrite contact "
#define CIAO "👋😊 Ciao Cacao! 👋😊"
#define EMPTY "Phonebook is empty.\nEnter 'ADD' to create a new contact"