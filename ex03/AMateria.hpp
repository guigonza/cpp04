/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 11:56:06 by Guille            #+#    #+#             */
/*   Updated: 2026/02/17 12:44:52 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria  
{
	protected:
		std::string _type;  

	public:
		AMateria(std::string const & type);  
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria();                  
		
		std::string const & getType() const;  
		virtual AMateria* clone() const = 0;  
		virtual void use(ICharacter& target); 
};



#endif