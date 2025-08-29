/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:28:09 by clu               #+#    #+#             */
/*   Updated: 2025/08/29 16:06:39 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	// Stack allocation
	randomChump("StackZombie");

	// Heap allocation
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete (heapZombie);

	return (0);
}
