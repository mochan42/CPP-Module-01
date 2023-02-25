/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:06:45 by mochan            #+#    #+#             */
/*   Updated: 2023/02/25 23:32:50 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	Zombie	z_stack = Zombie("zombie allocated on stack");
	Zombie* z_heap = z_heap->newZombie("zombie allocated on heap");
	
	z_stack.announce();
	z_heap->announce();
	randomChump("zombie randomly allocated on heap");
	delete z_heap;
	return (0);
}