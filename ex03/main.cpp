/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:02 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/02 15:36:25 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap jj("jj");

    jj.highFivesGuys();
    jj.beRepaired(105);
    jj.attack("Target");
    jj.takeDamage(650);
    return (0);
}