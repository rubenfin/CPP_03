/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/26 15:33:49 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/02 15:40:14 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _name;
    std::string _name_clap_name;
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &copy);
    void attack(const std::string &target);
    DiamondTrap& operator=(const DiamondTrap &t);
    ~DiamondTrap();
};

