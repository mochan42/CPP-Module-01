/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:55:25 by mochan            #+#    #+#             */
/*   Updated: 2023/03/01 22:32:06 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

// Weapon::Weapon()
// {
// 	std::cout << "Unknown Weapon constructor executed!\n";
// }

Weapon::Weapon(const std::string initialType)
{
	// std::cout << "Defined Weapon constructor executed!\n";
	type = initialType;
}

Weapon::~Weapon()
{
	// std::cout << "Weapon destructor executed!\n";
}

void	Weapon::setType(const std::string newType)
{
	type = newType;
}

const std::string &Weapon::getType() const
{
	return this->type;
}
