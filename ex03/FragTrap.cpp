/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 15:14:47 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/30 11:42:44 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("")
{
	std::cout << "Default FragTrap constructor called!" << std::endl;
	this->_hitPoints = ftHitPoints;
	this->_energyPoints = ftEnergyPoints;
	this->_attackDamage = ftAttackDamage;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "Default FragTrap constructor called!" << std::endl;
	this->_hitPoints = ftHitPoints;
	this->_energyPoints = ftEnergyPoints;
	this->_attackDamage = ftAttackDamage;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
	this->_name = other._name;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	this->_hitPoints = other._hitPoints;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		this->_hitPoints = other._hitPoints;
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "Fragtrap " << this->_name << " has HighFived everyone!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!" << std::endl;
}