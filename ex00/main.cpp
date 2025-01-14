/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:02 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/28 19:42:23 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap jj("Hheh");
	ClapTrap john("John");
    
	jj.beRepaired(19);
	jj.beRepaired(19);
	jj.beRepaired(19);
	jj.beRepaired(19);
	jj.beRepaired(19);
	jj.beRepaired(19);
	jj.beRepaired(19);
    john.beRepaired(2263);
	john = jj;
	john.attack("Somebody");
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);
	john.takeDamage(25);

	return (0);
}