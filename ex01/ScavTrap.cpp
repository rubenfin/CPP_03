/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 13:26:42 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/30 11:41:16 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(stHitPoints, stEnergyPoints, stAttackDamage)
{
	std::cout << "Default ScavTrap constructor called!" << std::endl;
	_hitPoints = stHitPoints;
	_energyPoints = stEnergyPoints;
	_attackDamage = stAttackDamage;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, stHitPoints,
	stEnergyPoints, stAttackDamage)
{
	std::cout << "Default ScavTrap constructor called!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_hitPoints <= 0)
		std::cout << this->_name << " has died!" << std::endl;
	else
		std::cout << this->_name << " has ran out of energy!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	static bool	guard;

	if (this->_hitPoints <= 0)
		std::cout << this->_name << " can't activate Gate keeper mode, it looks like he's died!" << std::endl;
	else if (guard)
	{
		std::cout << "ScavTrap " << this->_name << " has now turned off Gate keeper mode!" << std::endl;
		guard = false;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
		guard = true;
	}
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = other._name;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	this->_hitPoints = other._hitPoints;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor called!" << std::endl;
}
