/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:43:57 by mochan            #+#    #+#             */
/*   Updated: 2023/03/03 20:43:30 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

std::string	ft_replace(std::string str, int start, int len, std::string new_sub_str)
{
	std::string	first_sub_str = "";
	std::string	last_sub_str = "";
	std::string	replaced_str = "";
	int len_str = str.length();
	int len_first_sub_str = start;
	int len_last_sub_str = len_str - (len_first_sub_str + len);
	int i = 0;
	int j = 0;

	first_sub_str.resize(len_first_sub_str);
	last_sub_str.resize(len_last_sub_str);
	while (i < len_first_sub_str)
	{
		first_sub_str[j] = str[i];
		i++;
		j++;
	}
	i = start + len;
	j = 0;
	while (i < len_str)
	{
		last_sub_str[j] = str[i];
		i++;
		j++;
	}
	replaced_str = first_sub_str + new_sub_str + last_sub_str;
	return(replaced_str);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string			line;
		std::string			input_file_name = argv[1];
		std::string			output_file_name = input_file_name + ".replace";
		std::ifstream		input_file;
		std::stringstream	buffer;
		std::string			buffer_str;
		std::ofstream		output_file;
		
		if (strlen(argv[2]) == 0)
		{
			std::cout << "Error: string s1 to replace is empty.\n";
			return (0);
		}
		input_file.open(input_file_name.c_str());
		if (!input_file)
		{
			std::cout << "Error: Input file could not be opened.\n";
			return (0);
		}
		output_file.open(output_file_name.c_str());
		if (!output_file)
		{
			std::cout << "Error in creating : " + input_file_name << ".replace\n";
			return (0);
		}
		std::cout << input_file_name << ".replace created successfully!\n";
		if (input_file && output_file)
		{
			buffer << input_file.rdbuf();
			buffer_str = buffer.str();
			int pos = 0;
			int target_len = strlen(argv[2]);
			int replace_len = strlen(argv[3]);
			while ((pos = buffer_str.find(argv[2], pos)) != (int)std::string::npos)
			{
				buffer_str = ft_replace(buffer_str, pos, target_len, argv[3]);
				pos += replace_len;
			}
			output_file << buffer_str << "\n";
		}
		else
			std::cout << "Cannot read input file\n";
		input_file.close();
		output_file.close();
	}
	else
		std::cout << "Number of arguments must be 3.\n";
	return (0);
}
