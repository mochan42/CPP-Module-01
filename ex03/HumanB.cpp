/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:19 by mochan            #+#    #+#             */
/*   Updated: 2023/02/27 00:00:52 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanB.h"

HumanB::HumanB()
{
	std::cout << "HumanB constructor executed!\n";
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor executed!\n";
}

void	HumanB::attack(Weapon weapon)
{
	std::cout << HumanB.getName() << " attacks with their " << weapon << "\n";
}