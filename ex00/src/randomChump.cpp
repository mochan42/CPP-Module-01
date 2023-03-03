/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:06:52 by mochan            #+#    #+#             */
/*   Updated: 2023/03/01 22:14:12 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump( std::string name )
{
	Zombie	*newZombie = new Zombie();
	newZombie->setZombieName(name);
	newZombie->announce();
	delete newZombie;
}
