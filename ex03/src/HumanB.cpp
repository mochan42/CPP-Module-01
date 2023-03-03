/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:19 by mochan            #+#    #+#             */
/*   Updated: 2023/02/28 16:39:10 by mochan           ###   ########.fr       */
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
		std::cout << GREEN <<  getName() << " attacks with their hands " << "\n";
		return ;
	}
	std::cout << GREEN <<  getName() << " attacks with their " << _weapon->getType() << D << "\n";
}
