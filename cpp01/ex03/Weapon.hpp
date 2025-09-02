/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:15:48 by clu               #+#    #+#             */
/*   Updated: 2025/09/02 16:34:33 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		~Weapon();

		const std::string& getType() const;
		void setType(std::string type);
};

#endif
