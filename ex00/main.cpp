/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:02 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/04/26 14:22:58 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap jj("Hheh");
	ClapTrap john("John");
    ClapTrap noName;
    
	noName.beRepaired(19);
	noName.beRepaired(19);
	noName.beRepaired(19);
	noName.beRepaired(19);
	noName.beRepaired(19);
	noName.beRepaired(19);
	noName.beRepaired(19);
    john.beRepaired(2263);
	john = noName;
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);

	return (0);
}