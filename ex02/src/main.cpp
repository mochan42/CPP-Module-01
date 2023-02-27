/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:06:45 by mochan            #+#    #+#             */
/*   Updated: 2023/02/26 10:32:39 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << "Memory address of the \"string\" variable	: " << &string << "\n";
	std::cout << "Memory address held by stringPTR	: " << &stringPTR << "\n";
	std::cout << "Memory address held by stringREF	: " << &stringREF << "\n";
	std::cout << "Value of the \"string\" variable		: " << string << "\n";
	std::cout << "Value pointed to by stringPTR		: " << *stringPTR << "\n";
	std::cout << "Value pointed to by stringREF		: " << stringREF << "\n";
	return (0);
}