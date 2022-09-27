#include "Account.hpp"
#include <time.h>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
	time_t rtime;
	struct tm *timeinfo;

	time(&rtime);
	timeinfo = localtime(&rtime);

	std::cout << '[' << "2021" << timeinfo->tm_mon + 1 << timeinfo->tm_mday << '_' << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "] " ;
}

Account::Account(int ID)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = ID;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "created\n";
}

Account::~Account()
{
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "closed\n";
}

int Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int dp)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	std::cout << "deposit:" << dp << ';';
	this->_amount += dp;
	Account::_totalAmount += dp;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int wd)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	if (wd > this->_amount)
	{
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << wd << ';';
		this->_amount -= wd;
		Account::_totalAmount -= wd;
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << "amount:" << this->_amount << ';';
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int Account::checkAmount() const
{
	return (this->_amount);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}