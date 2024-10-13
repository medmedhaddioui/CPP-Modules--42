/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:25:18 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/10/12 19:45:56 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] " 
    << "index:" << _accountIndex << ";"
    << "amount:" << _amount << ";"
    << "created" << std::endl;
}
Account::~Account()
{
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] " 
    << "index:" << _accountIndex << ";"
    << "amount:" << _amount << ";"
    << "closed" << std::endl;
}
int Account::getNbAccounts (void )
{
    return (_nbAccounts );
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos( void )
{
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] " 
    << "accounts:" << Account::getNbAccounts()  << ";"
    <<  "total:" << Account::getTotalAmount() << ";"
    << "deposits:" << Account::getNbDeposits() << ";"
    << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
void Account::_displayTimestamp()
{
    std::time_t now = std::time(0);
    std::tm* localTime = std::localtime(&now);
    std::cout << (localTime->tm_year + 1900) << (localTime->tm_mon + 1) << localTime->tm_mday
    << '_';
    std::cout << std::setfill('0')  << std::setw(2) << localTime->tm_hour           
    << std::setw(2) << localTime->tm_min
    << std::setw(2) << localTime->tm_sec;
}
void Account::makeDeposit( int deposit)
{
    _totalAmount += deposit;
    _totalNbDeposits += ++_nbDeposits;
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] " 
    << "index:" << _accountIndex << ";"
    << "p_amount:" << _amount << ";"
    << "deposit:" << deposit << ";";
    _amount += deposit;
    std::cout << "amount:" << _amount << ";"
    << "nb_deposits:" << _nbDeposits << std::endl;
    
}
bool	Account::makeWithdrawal( int withdrawal )
{
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] " 
    << "index:" << _accountIndex << ";"
    << "p_amount:" << _amount << ";" 
    << "withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += ++_nbWithdrawals;
    std::cout << withdrawal << ";"
    << "amount:"<< _amount << ";"
    << "nb_withdrawals:" << _nbWithdrawals <<std::endl;
    return true;
}

int Account::checkAmount() const
{
    return _amount;
}

void Account::displayStatus( void ) const
{
    std::cout << "[";
    Account::_displayTimestamp();
    std::cout << "] " 
    << "index:" << _accountIndex << ";"
    << "amount:" << _amount << ";"
    << "deposits:" << _nbDeposits << ";"
    << "withdrawals:" << _nbWithdrawals << std::endl;
}
