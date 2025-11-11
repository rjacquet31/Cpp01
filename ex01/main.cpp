/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjacquet <rjacquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:05:31 by rjacquet          #+#    #+#             */
/*   Updated: 2025/11/11 17:46:44 by rjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	int i = 0;
	Zombie *horde= zombieHorde(N, "Horde ");
	while (i < N)
	{
		std::cout << "Zombie " << i << ": ";
	   	horde[i].announce();
		i++;
	}
	delete[] horde;
	return(0);
}
