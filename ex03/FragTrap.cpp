/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 15:14:47 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/04/29 16:06:48 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor called!" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Default FragTrap constructor called!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
	this->_name = copy._name;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	this->_hitPoints = copy._hitPoints;
}

FragTrap &FragTrap::operator=(const FragTrap &t)
{
	std::cout << "FragTrap copy assignment operator called!" << std::endl;
	if (this != &t)
	{
		this->_name = t._name;
		this->_energyPoints = t._energyPoints;
		this->_attackDamage = t._attackDamage;
		this->_hitPoints = t._hitPoints;
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "Fragtrap " << this->_name << " has HighFived everyone!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor called!" << std::endl;
}