/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:16:28 by clu               #+#    #+#             */
/*   Updated: 2025/09/02 17:16:31 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB ::HumanB(std::string name) : name(name), weapon(nullptr)
{
	std::cout << "HumanB constructor called: " << this->name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called: " << this->name << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with." << std::endl;
}
