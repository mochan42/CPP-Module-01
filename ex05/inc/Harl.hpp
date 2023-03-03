/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:31:01 by mochan            #+#    #+#             */
/*   Updated: 2023/03/02 19:54:26 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>
#include <cstring>

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain (std::string level);
		void	debug( void );
		void	info ( void );
		void	warning ( void );
		void	error ( void );

	private:
};

#endif