/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjacquet <rjacquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:37:43 by rjacquet          #+#    #+#             */
/*   Updated: 2025/11/11 17:43:15 by rjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		zombieHorde[i] = Zombie(name);
		i++;
	}
	return (zombieHorde);
}