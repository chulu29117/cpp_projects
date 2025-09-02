/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:16:06 by clu               #+#    #+#             */
/*   Updated: 2025/09/02 17:12:07 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack() const;
};

#endif