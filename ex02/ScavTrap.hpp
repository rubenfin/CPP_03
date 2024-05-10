/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 13:26:29 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/10 17:37:57 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  private:
	static const int stHitPoints = 100;
	static const int stEnergyPoints = 50;
	static const int stAttackDamage = 20;

  public:
	ScavTrap(void);
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate(void);
};