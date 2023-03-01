/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:05:18 by mochan            #+#    #+#             */
/*   Updated: 2023/03/01 21:52:24 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
	// std::cout << "Harl constructor executed!\n";
}

Harl::~Harl()
{
	// std::cout << "Harl destructor executed!\n";
}

void	Harl::debug( void )
{
	std::cout << GREEN <<"[ DEBUG ]" << D << "\n";
	std::cout << GREEN <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << D << "\n\n";
}

void	Harl::info( void )
{
	std::cout << BLU << "[ INFO ]" << D << "\n";
	std::cout << BLU << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << D << "\n\n";
}

void	Harl::warning( void )
{
	std::cout << YELL << "[ WARNING ]" << D << "\n";
	std::cout << YELL << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << D << "\n\n";
}

void	Harl::error( void )
{
	std::cout << RED << "[ ERROR ]" << D << "\n";
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << D << "\n\n";
}

void	Harl::complain (std::string level)
{
	void		(Harl::*FuncPtr[4])(void); // Declaration of an array of Pointers to member functions
	std::string	funct[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; // Array of the name of member functions
	int			i;
	
	//initialization of Pointers to member functions
	FuncPtr[0] = &Harl::debug; 
	FuncPtr[1] = &Harl::info;
	FuncPtr[2] = &Harl::warning;
	FuncPtr[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		if (level == funct[i])
		{
			(this->*FuncPtr[i])(); // Use of the pointer to (void) member functions
		}
		i++;
	}
}

