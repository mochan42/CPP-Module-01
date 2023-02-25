/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:06:56 by mochan            #+#    #+#             */
/*   Updated: 2023/02/25 22:05:51 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string setName)
{
	this->_name = setName;
}

Zombie::~Zombie()
{
	std::cout << "Zombie :" << this->_name << " was killed by its destructor.\n";
}

std::string	Zombie::getZombieName()
{
	return _name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

