/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:06:45 by mochan            #+#    #+#             */
/*   Updated: 2023/03/01 22:21:56 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	Zombie	z_stack;
	z_stack.announce();
	z_stack.setZombieName("zombie allocated on stack");
	z_stack.announce();
	std::cout << "\n";
	
	Zombie* z_heap = newZombie("zombie allocated on heap");	
	delete z_heap;
	std::cout << "\n";
	
	randomChump("zombie randomly allocated on heap");
	std::cout << "\n";
	return (0);
}
