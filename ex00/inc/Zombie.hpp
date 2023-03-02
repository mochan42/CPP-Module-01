/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:07:01 by mochan            #+#    #+#             */
/*   Updated: 2023/03/02 19:53:28 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <cstring>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		std::string	getZombieName();
		void		announce(void);
		void		randomChump( std::string name );
		void		setZombieName(std::string setName);
		
	private:
		std::string	_name;
};


#endif