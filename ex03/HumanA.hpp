/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:38:17 by mochan            #+#    #+#             */
/*   Updated: 2023/02/27 00:04:47 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include <string>

class HumanA
{
	public:
		HumanA();
		~HumanA();
		void	attack(Weapon weapon);
		
		
	private:
		Weapon		weapon;
		std::string	name;
};

#endif