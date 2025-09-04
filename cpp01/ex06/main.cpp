/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:49:43 by clu               #+#    #+#             */
/*   Updated: 2025/09/03 15:08:42 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harlFilter.hpp"
#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./Harl <level>" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
	return (0);
}

