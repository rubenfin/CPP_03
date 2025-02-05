/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:33:58 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/30 11:40:26 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(ctHitPoints),
	_energyPoints(ctEnergyPoints), _attackDamage(ctAttackDamage)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(ctHitPoints),
	_energyPoints(ctEnergyPoints), _attackDamage(ctAttackDamage)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hitpoints left!" << std::endl;
	else
		std::cout << this->_name << " has ran out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage " << std::endl;
		this->_hitPoints -= amount;
	}
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hitpoints left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repaired itself with " << amount << " going from " << this->_hitPoints << " to " << this->_hitPoints
			+ amount << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hitpoints left!" << std::endl;
	else
		std::cout << this->_name << " has ran out of energy!" << std::endl;
}
