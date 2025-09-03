/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:37:51 by clu               #+#    #+#             */
/*   Updated: 2025/09/03 14:38:34 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:
    	Harl();
    	~Harl();
    	void complain(std::string level);
	
	private:
    	void debug();
    	void info();
    	void warning();
    	void error();
};

#endif
