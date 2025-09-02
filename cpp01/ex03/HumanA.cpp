/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:16:12 by clu               #+#    #+#             */
/*   Updated: 2025/09/02 17:11:09 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA constructor called: " << this->name << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called: " << this->name << std::endl;
}
void HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
