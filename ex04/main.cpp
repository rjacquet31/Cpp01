/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjacquet <rjacquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:43:24 by rjacquet          #+#    #+#             */
/*   Updated: 2025/11/28 14:43:25 by rjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Too many or not enough arguments\nPlease use the program like this : <filename> <string 1> <string 2>" << std::endl;
		return 0;
	}
	else
	{
		std::string filename = av[1];
		std::string string1 = av[2];
		std::string string2 = av[3];
		replace_in_file(filename, string1, string2);
	}
}
