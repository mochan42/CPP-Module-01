/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:07:01 by mochan            #+#    #+#             */
/*   Updated: 2023/02/25 22:07:41 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string setName);
		~Zombie();
		std::string	getZombieName();
		void		announce(void);
		Zombie* 	newZombie( std::string name );
		void		randomChump( std::string name );
		
	private:
		std::string	_name;
};


#endif