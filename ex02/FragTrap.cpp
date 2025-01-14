/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 15:14:47 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/30 11:50:35 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, ftHitPoints, ftEnergyPoints, ftAttackDamage)
{
	std::cout << "Default FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
	*this = other;
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
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " can't HighFive, " << this->_name << " has no hitpoints left!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " has HighFived everyone!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor called!" << std::endl;
}