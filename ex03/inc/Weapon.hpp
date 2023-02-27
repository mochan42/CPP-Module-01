/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:35 by mochan            #+#    #+#             */
/*   Updated: 2023/02/27 18:46:56 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(const std::string initialType);
		~Weapon();
		const	std::string getType();
		void	setType(const std::string newType);

	private:
		std::string type;
};

#endif