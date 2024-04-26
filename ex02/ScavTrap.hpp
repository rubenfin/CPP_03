/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 13:26:29 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/04/26 15:31:25 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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