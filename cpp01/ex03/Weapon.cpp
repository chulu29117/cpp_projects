/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:15:57 by clu               #+#    #+#             */
/*   Updated: 2025/09/02 17:12:15 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type) 
{
	std::cout << "Weapon constructor called: " << this->type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called: " << this->type << std::endl;
}

const std::string& Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
