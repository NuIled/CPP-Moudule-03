/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:11:18 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/10 02:12:16 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>

class ClapTrap {
	std::string Name;
	unsigned int Hit_point;
	unsigned int Damage;
	unsigned int Energy;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const std::string &name, unsigned int Damage,unsigned int Energy,unsigned int Hit_point);
	ClapTrap(const ClapTrap &obj);
	ClapTrap& operator=(const ClapTrap &obj);
	~ClapTrap();
	std::string& get_name();
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void attack(const std::string& target);
};
#endif