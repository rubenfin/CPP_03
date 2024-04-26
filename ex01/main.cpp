/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:02 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/04/26 15:07:33 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap jj("jj");

    ClapTrap X ("CP");
    ScavTrap J = jj;
    J.takeDamage(1000);
    jj.attack("Hey");
    jj.attack("Hey");
    jj.attack("Hey");
    jj.beRepaired(25);
    jj.beRepaired(25);
    jj.beRepaired(25);
    jj.takeDamage(100);
    jj.takeDamage(100);
    jj.takeDamage(100);
    jj.guardGate();

    X = J;
    X.beRepaired(10000);

    return (0);
}