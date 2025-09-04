/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:37:51 by clu               #+#    #+#             */
/*   Updated: 2025/09/03 15:09:07 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

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
