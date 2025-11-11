/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjacquet <rjacquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:05:31 by rjacquet          #+#    #+#             */
/*   Updated: 2025/11/11 17:28:55 by rjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("Random Zombie");
	Zombie *newZombie1 = newZombie("Foo");
	newZombie1->announce();
	delete newZombie1;
	return(0);
}
