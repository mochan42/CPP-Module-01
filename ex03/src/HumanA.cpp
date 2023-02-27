/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:24:04 by mochan            #+#    #+#             */
/*   Updated: 2023/02/27 22:09:04 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string setName, Weapon& setHumanAWeapon) :  _weapon(setHumanAWeapon), _name(setName)
{
	// std::cout << "HumanA constructor executed!\n";
}

HumanA::~HumanA()
{
	// std::cout << "HumanA destructor executed!\n";
}

std::string	HumanA::getName()
{
	return _name;
}

void	HumanA::attack()
{
	std::cout << "\033[34m" << getName() << " attacks with their " << _weapon.getType() << "\n";
	std::cout << "\033[0m";
}
