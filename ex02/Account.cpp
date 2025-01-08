/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:11:43 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/16 17:19:27 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// ----------------------------------------------------> Initialize static variables

int	Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalAmount = 0;

// ----------------------------------------------------> Constructor

Account::Account(int initial_deposit) {
	
    this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
}

// ----------------------------------------------------> Destructor

Account::~Account() {
    
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}

// ----------------------------------------------------> Static Methods

void Account::_displayTimestamp(void) {
    std::time_t now;
    struct tm* localTime;
    char buffer[100];

    now = std::time(NULL);
    localTime = std::localtime(&now);
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", localTime);
    std::cout << buffer << " ";
}

void	Account::displayAccountsInfos(void) {
    
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << \
		";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << \
		";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

// ----------------------------------------------------> Member Methods

void	Account::makeDeposit(int deposit) {
    
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << \
		";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
    
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << \
	this->_amount << ";withdrawal:";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->checkAmount() - withdrawal << \
		";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	return (true);
}

void	Account::displayStatus(void) const {
    
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits << \
		";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::checkAmount(void) const {
    
	return (this->_amount);
}

 // --------------------------------------------------------------------> Getters
 
int	Account::getNbAccounts(void) {
	
    return (_nbAccounts);
}

int	Account::getTotalAmount(void) {

	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
    
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
    
	return (_totalNbWithdrawals);
}
