/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:43:57 by mochan            #+#    #+#             */
/*   Updated: 2023/03/03 21:12:59 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

std::string	ft_replace(std::string str, int start, int len, std::string newSubStr)
{
	std::string	firstSubStr = "";
	std::string	lastSubStr = "";
	std::string	replacedStr = "";
	int lenStr = str.length();
	int lenFirstSubStr = start;
	int lenLastSubStr = lenStr - (lenFirstSubStr + len);
	int i = 0;
	int j = 0;

	firstSubStr.resize(lenFirstSubStr);
	lastSubStr.resize(lenLastSubStr);
	while (i < lenFirstSubStr)
	{
		firstSubStr[j] = str[i];
		i++;
		j++;
	}
	i = start + len;
	j = 0;
	while (i < lenStr)
	{
		lastSubStr[j] = str[i];
		i++;
		j++;
	}
	replacedStr = firstSubStr + newSubStr + lastSubStr;
	return(replacedStr);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string			line;
		std::string			inputFileName = argv[1];
		std::string			outputFileName = inputFileName + ".replace";
		std::ifstream		inputFile;
		std::stringstream	buffer;
		std::string			bufferStr;
		std::ofstream		outputFile;
		
		if (strlen(argv[2]) == 0)
		{
			std::cout << "Error: string s1 to replace is empty.\n";
			return (0);
		}
		inputFile.open(inputFileName.c_str());
		if (!inputFile)
		{
			std::cout << "Error: Input file could not be opened.\n";
			return (0);
		}
		outputFile.open(outputFileName.c_str());
		if (!outputFile)
		{
			std::cout << "Error in creating : " + inputFileName << ".replace\n";
			return (0);
		}
		std::cout << inputFileName << ".replace created successfully!\n";
		if (inputFile && outputFile)
		{
			buffer << inputFile.rdbuf();
			bufferStr = buffer.str();
			int pos = 0;
			int targetLen = strlen(argv[2]);
			int replaceLen = strlen(argv[3]);
			while ((pos = bufferStr.find(argv[2], pos)) != (int)std::string::npos)
			{
				bufferStr = ft_replace(bufferStr, pos, targetLen, argv[3]);
				pos += replaceLen;
			}
			outputFile << bufferStr << "\n";
		}
		else
			std::cout << "Cannot read input file\n";
		inputFile.close();
		outputFile.close();
	}
	else
		std::cout << "Number of arguments must be 3.\n";
	return (0);
}
