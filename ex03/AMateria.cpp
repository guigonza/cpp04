/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:39:34 by Guille            #+#    #+#             */
/*   Updated: 2026/02/17 17:47:28 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	//std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	//std::cout << "AMateria copy constructor called" << std::endl;
}
AMateria& AMateria::operator=(const AMateria& other)
{
	//std::cout << "AMateria operator called" << std::endl;
	(void)other;
	return (*this);
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const 
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}