/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:01 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/02 15:36:42 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
  protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

  public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hitPoints, int energyPoints,
		int attackDamage);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &t);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
