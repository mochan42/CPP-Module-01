/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:17 by mochan            #+#    #+#             */
/*   Updated: 2023/03/02 19:53:57 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "Weapon.h"

class HumanA
{
	public:
		HumanA(std::string setName, Weapon& setHumanAWeapon);
		~HumanA();
		void	attack();
		std::string	getName();
		
	private:
		Weapon&		_weapon;
		std::string	_name;
};

#endif