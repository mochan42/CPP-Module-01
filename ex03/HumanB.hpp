/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:25 by mochan            #+#    #+#             */
/*   Updated: 2023/02/27 00:02:33 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include <string>

class HumanB
{
	public:
		HumanB();
		~HumanB();
		void	attack(Weapon weapon);
		
	private:
		Weapon		weapon;
		std::string	name;
};

#endif