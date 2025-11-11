/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjacquet <rjacquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 22:34:26 by rjacquet          #+#    #+#             */
/*   Updated: 2025/11/11 17:43:22 by rjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string _N);
		~Zombie();
		void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif
