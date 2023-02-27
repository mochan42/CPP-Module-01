/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:19 by mochan            #+#    #+#             */
/*   Updated: 2023/02/27 22:08:53 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string setName) : _weapon(NULL), _name(setName)
{
	// std::cout << "HumanB constructor executed!\n";
}

HumanB::~HumanB()
{
	// std::cout << "HumanB destructor executed!\n";
}

std::string	HumanB::getName()
{
	return _name;
}

void	HumanB::setWeapon(Weapon& setWeapon)
{
	_weapon = &setWeapon;
}

void	HumanB::attack()
{
	if (!_weapon)
	{
		std::cout << "\033[32m" <<  getName() << " attacks with their hands\n";
		return ;
	}
	std::cout << "\033[32m" <<  getName() << " attacks with their " << _weapon->getType() << "\n";
	std::cout << "\033[0m";
}
