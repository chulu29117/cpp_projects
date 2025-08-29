/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:28:09 by clu               #+#    #+#             */
/*   Updated: 2025/08/29 16:29:03 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	int N = 10;

	Zombie* horde = zombieHorde(N, "HordeZombie");
	if (horde)
	{
		for (int i = 0; i < N; ++i)
			horde[i].announce();
		delete[] horde;
	}
	else
	{
		std::cout << "Failed to create zombie horde." << std::endl;
	}
	return (0);
}
