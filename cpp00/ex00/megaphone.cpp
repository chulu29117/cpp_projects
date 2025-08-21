/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:22:16 by clu               #+#    #+#             */
/*   Updated: 2025/08/21 16:36:58 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				std::cout << (char) toupper(argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
}
