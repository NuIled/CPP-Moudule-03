/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:58:40 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/10 16:55:30 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(const std::string &name);
	~ScavTrap();
	ScavTrap(const ScavTrap &obj);
	ScavTrap& operator=(const ScavTrap &obj);
	void attack(const std::string& target);
	void guardGate();

};

#endif
