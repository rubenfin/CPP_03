/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 15:34:02 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/04/26 15:28:47 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap jj("jj");

    jj.highFivesGuys();
    jj.beRepaired(105);
    jj.attack("Target");
    jj.takeDamage(650);
    return (0);
}