/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:54 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/10 17:00:56 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ScavTrap ash( "Ash" );
     ash.takeDamage( 10 );
   // ScavTrap ash2( ash );
     ash.attack( "the air" );
     ash.beRepaired( 10 );
     ash.guardGate();
    return 0;    
}


