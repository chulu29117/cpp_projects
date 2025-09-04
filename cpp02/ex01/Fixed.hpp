/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:38:54 by clu               #+#    #+#             */
/*   Updated: 2025/09/04 11:55:45 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		
	
		float	toFloat() const;
		int 	toInt() const;
		int		getValue() const;
		void 	setvalue(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
