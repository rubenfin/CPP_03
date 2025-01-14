/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:02 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/30 11:26:34 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap jj("jj");

	jj.attack("Hey");
	jj.attack("Hey");
	jj.attack("Hey");
	jj.attack("Hey");
	jj.attack("Hey");
	jj.beRepaired(25);
	jj.beRepaired(25);
	jj.beRepaired(25);
	jj.guardGate();
	jj.guardGate();
	jj.takeDamage(100);
	jj.takeDamage(100);
	jj.takeDamage(100);
	jj.guardGate();
	
	return (0);
}