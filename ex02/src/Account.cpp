/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:46:34 by egache            #+#    #+#             */
/*   Updated: 2025/12/03 20:06:27 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
  this->_accountIndex = _nbAccounts;
  _totalAmount += initial_deposit;
  this->_amount = initial_deposit;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit
            << ";created" << std::endl;
  _nbAccounts++;
  return;
}

Account::~Account(void)
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";closed" << std::endl;
}

int Account::getNbAccounts() { return _nbAccounts; }

int Account::getTotalAmount() { return _totalAmount; }

int Account::getNbDeposits() { return _totalNbDeposits; }

int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void Account::displayAccountsInfos()
{
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::getNbAccounts()
            << ";total:" << Account::getTotalAmount()
            << ";deposits:" << Account::getNbDeposits()
            << ":withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
  this->_amount += deposit;
  _totalAmount += deposit;
  _totalNbDeposits++;
  this->_nbDeposits++;
  std::cout << ";deposit:" << deposit << ";amount:" << this->_amount
            << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ":p_amount:" << this->_amount
            << ";withdrawal:";
  if (this->_amount < withdrawal)
  {
    std::cout << "refused" << std::endl;
    return false;
  }
  this->_amount -= withdrawal;
  _totalAmount -= withdrawal;
  _totalNbWithdrawals++;
  this->_nbWithdrawals++;
  std::cout << withdrawal << ";amount:" << this->_amount
            << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  return true;
}

int Account::checkAmount(void) const { return this->_amount; }

void Account::displayStatus(void) const
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";deposits:" << this->_nbDeposits
            << ";withdrawals:" << this->_nbWithdrawals << std::endl;
  return;
}

void Account::_displayTimestamp()
{
  time_t timestamp;
  timestamp = time(NULL);
  struct tm *date = localtime(&timestamp);
  std::cout << "[" << date->tm_year + 1900 << date->tm_mon + 1 << date->tm_mday
            << "-" << date->tm_hour << date->tm_min << date->tm_sec << "] ";
  return;
}
