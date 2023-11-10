/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:11:18 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/09 23:44:46 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>

class ClapTrap {
	const std::string Name;
	unsigned int Hit_point;
	unsigned int Damage;
	unsigned int Energy;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap& operator=(const ClapTrap &obj);
	~ClapTrap();
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void attack(const std::string& target);
};
#endif