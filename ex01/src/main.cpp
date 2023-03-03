/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:06:45 by mochan            #+#    #+#             */
/*   Updated: 2023/03/02 18:21:36 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	Zombie*	big_horde;
	int		n = 5;

	big_horde = zombieHorde(n, "horde_zombie_");
	for (int i = 0; i < n; i++)
	{
		big_horde[i].announce();
	}
	delete [] big_horde;
	return (0);
}
