/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:11:14 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/10 17:00:38 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define Log(x) std::cout << x << std::endl;

ClapTrap::ClapTrap():Name("default"),Hit_point(10),Damage(0),Energy(10){
    Log("ClapTrap Constructor Called")
};

ClapTrap::ClapTrap(const std::string &name):Name(name){
    Log("ClapTrap Constructor Called")
};

ClapTrap::~ClapTrap(){
    Log("ClapTrap Destructor Called")
};

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
    if(this != &obj)
        *this = obj;
    return *this;
};

void ClapTrap::attack(const std::string& target)
{
    if(this->Hit_point > 0 || this->Energy > 0)
        Log("ClapTrap " << this->Name << " attacks "<< target << " causing " << this->Damage << " points of damage!");
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Hit_point > 0 || this->Energy > 0)
        {
            this->Hit_point -= amount;
            this->Energy--;
            Log("ClapTrap " << this->Name << " Take " << amount << " points of Damage!");
        }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Hit_point > 0 || this->Energy > 0)
    {
        this->Hit_point+=amount;   
        this->Energy--;
        Log("ClapTrap " << this->Name << " Repaired " << amount << " points of Hit_point!");
    }
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    if(this != &obj)
        *this = obj;
    Log("ClapTrap Copy Constructor Called")
};
