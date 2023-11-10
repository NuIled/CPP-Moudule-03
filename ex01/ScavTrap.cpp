/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:58:37 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/10 02:21:47 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define Log(x) std::cout << x << std::endl;

ScavTrap::ScavTrap(const std::string &name):ClapTrap(name,20,50,100){
    Log("ScavTrap Constructor Called")
};

ScavTrap::~ScavTrap(){
    Log("ScavTrap Destructor Called")
};

void ScavTrap::guardGate()
{
    Log(this->get_name() << "ScavTrap is now in Gate keeper mode.");
}
