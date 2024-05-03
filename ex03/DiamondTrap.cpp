/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 15:33:46 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/02 16:22:46 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30)
{
	std::cout << "Called constructor" << std::endl;
	this->_name = name;
	this->_name_clap_name = name + "_clap_name";
}

// // DiamondTrap::DiamondTrap(const DiamondTrap &copy) : _name(copy._name),
// 	_attackDamage(copy._attackDamage)
// {

// }

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

// DiamondTrap &DiamondTrap::operator=(const DiamondTrap &t)
// {
// 	if (this != &t)
// 	{
// 		this->_name = copy._name;
// 		this->_attackDamage = copy._attackDamage;
// 		this->_hitPoints = copy._hitPoints;
// 		this->_energyPoints = copy._energyPoints;
// 	}
//     return(*this);
// }

DiamondTrap::~DiamondTrap()
{
}