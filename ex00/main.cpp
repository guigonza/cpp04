/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:36:44 by Guille            #+#    #+#             */
/*   Updated: 2026/02/16 12:30:26 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
std::cout << "Manadatory tests" << std::endl;
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}

// std::cout << "Wrong clases - No virtual" << std::endl;
// {
// 	const WrongAnimal* wrong_meta = new WrongAnimal();
// 	const WrongAnimal* wrong_cat = new WrongCat();
// 	wrong_meta->makeSound();
// 	wrong_cat->makeSound(); /*Should print wrong animal sound*/
// 	std::cout << "Deleting" << std::endl;
// 	delete wrong_meta;
// 	delete wrong_cat; /*shold find leaks in -WrongCat()*/
// }

return 0;
}