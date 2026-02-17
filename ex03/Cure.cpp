/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:58:22 by Guille            #+#    #+#             */
/*   Updated: 2026/02/17 17:47:49 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Default Cure constructor called" << std::endl;
}
Cure::Cure(const Cure& other) : AMateria(other)
{
	//std::cout << "Cure copy constructor called" << std::endl;
}
Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}
AMateria* Cure::clone() const
{
	return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}