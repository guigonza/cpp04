/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:58:18 by Guille            #+#    #+#             */
/*   Updated: 2026/02/17 16:55:37 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
	public:
		Character (std::string const & name);
		Character (const Character& other);
		Character& operator=(const Character& other);
		~Character ();
		
		std::string const & getName() const;
		void equip(AMateria* materia);
		void unequip(int index);
		void use(int index, ICharacter& target);
};




#endif