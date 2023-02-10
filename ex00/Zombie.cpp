/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:06:56 by mochan            #+#    #+#             */
/*   Updated: 2023/02/10 18:35:14 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << "Zombie :" << this->_name << " was killed by its destructor.\n";
}

std::string	Zombie::getZombieName()
{
	return _name;
}

void	Zombie::setZombieName(std::string inputName)
{
	_name = inputName;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

