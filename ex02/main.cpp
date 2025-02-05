/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:02 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/30 11:47:26 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap jj("jj");

    jj.highFivesGuys();
    jj.beRepaired(105);
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.attack("Target");
    jj.takeDamage(650);
    jj.highFivesGuys();

    return (0);
}