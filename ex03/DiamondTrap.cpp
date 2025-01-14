/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 15:33:46 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/30 12:00:06 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name", ctHitPoints, stEnergyPoints, ftAttackDamage), _name(name)
{
	std::cout << "Default DiamondTrap constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Called DiamondTrap copy constructor" << std::endl;
	*this = copy;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target); 
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is : " << this->_name << ", my ClapTrap name is : " << this->ClapTrap::_name << "!"<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "Called DiamondTrap copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->ClapTrap::_name = other.ClapTrap::_name;
		this->_attackDamage = other._attackDamage;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
	}
    return(*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!" << std::endl;
}