/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjacquet <rjacquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:43:29 by rjacquet          #+#    #+#             */
/*   Updated: 2025/11/28 14:43:30 by rjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool replace_in_file(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream in(filename.c_str());
    if (!in.is_open())
	{
        std::cerr << "Error : cannot open " << filename << std::endl;
        return false;
    }
    std::string content;
    std::string line;
    while (std::getline(in, line))
	{
        content += line;
        content += '\n';
    }
    in.close();
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
	{
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
    std::ofstream out((filename + ".replace").c_str());
    if (!out.is_open())
	{
        std::cerr << "Error : cannot create " << filename << ".replace" << std::endl;
        return false;
    }
    out << content;
    out.close();
    return true;
}
