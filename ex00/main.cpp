/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungdki <hyungdki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:58:04 by hyungdki          #+#    #+#             */
/*   Updated: 2023/11/20 16:28:02 by hyungdki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
	Zombie monster00("monster00");

	monster00.announce();
	//-------------------------------------------------
	Zombie* monster01 = newZombie("monster01");

	monster01->announce();
	delete monster01;

	//-------------------------------------------------
	randomChump("monster02");
}