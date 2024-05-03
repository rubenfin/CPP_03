/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 13:26:29 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/02 15:32:07 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public:
	ScavTrap(void);
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator=(const ScavTrap &t);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate(void);
};