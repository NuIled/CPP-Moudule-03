/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:58:40 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/10 02:21:50 by aoutifra         ###   ########.fr       */
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
	void guardGate();
};
#endif
