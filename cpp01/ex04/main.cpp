/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:06:09 by clu               #+#    #+#             */
/*   Updated: 2025/09/03 11:59:29 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

static std::string replaceAll(const std::string& line, const std::string& s1, const std::string& s2)
{
	std::string result = line;
	size_t pos = 0;
	while (!s1.empty() && (pos = result.find(s1, pos)) != std::string::npos)
	{
		result.erase(pos, s1.length());
		result.insert(pos, s2);
		pos += s2.length();
	}
	return (result);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile(filename);
	if (!inputFile)
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return (1);
	}

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile)
	{
		std::cerr << "Error: Could not create output file " << filename + ".replace" << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(inputFile, line))
		outputFile << replaceAll(line, s1, s2) << std::endl;
	inputFile.close();
	outputFile.close();
	return (0);
}

