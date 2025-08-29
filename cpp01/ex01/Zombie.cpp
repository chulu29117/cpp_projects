/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:28:28 by clu               #+#    #+#             */
/*   Updated: 2025/08/29 16:28:48 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

// Constructors
Zombie::Zombie(void)
{
	std::cout << "Zombie Constructor called" << std::endl;
	return ;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed." << std::endl;
}
// Set name method
void Zombie::setName(std::string name)
{
	this->name = name;
}

// Announce method
void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
