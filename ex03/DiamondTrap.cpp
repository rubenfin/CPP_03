/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 15:33:46 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/10 17:48:06 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", ctHitPoints, stEnergyPoints, ftAttackDamage)
{
	std::cout << "Called constructor" << std::endl;
	this->_name = name;
	this->_name_clap_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target); 
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
	}
    return(*this);
}

DiamondTrap::~DiamondTrap()
{
}