/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:25 by mochan            #+#    #+#             */
/*   Updated: 2023/03/02 19:54:04 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include <string>
#include <cstring>
#include "Weapon.h"

class HumanB
{
	public:
		HumanB(std::string setName);
		~HumanB();
		void		setWeapon(Weapon& setWeapon);
		void		attack();
		std::string	getName();
		
	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif