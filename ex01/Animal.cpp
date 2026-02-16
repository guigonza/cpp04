/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:36:23 by Guille            #+#    #+#             */
/*   Updated: 2026/02/16 14:52:57 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : _type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout <<  "Animal " << _type << " Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout <<  "Animal assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

const std::string& Animal::getType(void) const
{
	return(this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << "* Generic animal sound *" << std::endl;
}