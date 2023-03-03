/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:04:29 by mochan            #+#    #+#             */
/*   Updated: 2023/03/01 21:23:13 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(int argc, char **argv)
{
	Harl harl;
	std::string level;

	if (argc > 2)
	{
		std::cout << "Error: only one argument is required.\n";
		return (0);
	}
	else if (argv[1])
	{
		level = argv[1];
		if (level == "I am not sure how tired I am today...")
		{
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			return (0);
		}
		else
			harl.complain(level);
	}
	else
	{
		std::cout << "Error: empty command.\n";
		return (0);
	}
	return (0);
}
