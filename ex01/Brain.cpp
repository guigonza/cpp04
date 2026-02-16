/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:07:28 by Guille            #+#    #+#             */
/*   Updated: 2026/02/16 13:37:34 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i <= 99; i++)
		ideas[i] = "I have a random idea";
}
Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i <= 99; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}
const std::string& Brain::getIdea(int index) const 
{
	static const std::string empty = "";
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (empty);
}