/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Guille <Guille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:36:44 by Guille            #+#    #+#             */
/*   Updated: 2026/02/16 15:07:11 by Guille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
std::cout << "Manadatory tests" << std::endl;
{
        const int size = 4;
        Animal* animals[size];
        
        for (int i = 0; i < size; i++)
        {
            if (i < size / 2)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }
        
        std::cout << "\nDeleting array...\n";
        for (int i = 0; i < size; i++)
            delete animals[i];
}

std::cout << "\nDeep copy" << std::endl;
{
	Dog basic;
		std::cout << basic.getBrain()->getIdea(0) << std::endl;
        basic.getBrain()->setIdea(0, "Original idea");
        
        Dog tmp(basic);  // Copy constructor
        
        std::cout << "Basic dog idea: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied dog idea: " << tmp.getBrain()->getIdea(0) << std::endl;
        
        basic.getBrain()->setIdea(0, "Modified idea");
        
        std::cout << "\nAfter modification:" << std::endl;
        std::cout << "Basic dog idea: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied dog idea: " << tmp.getBrain()->getIdea(0) << std::endl;
        
        if (basic.getBrain()->getIdea(0) != tmp.getBrain()->getIdea(0))
            std::cout << "Deep copy works!\n";
        else
            std::cout << "Shallow copy detected!\n";
}
std::cout << "\nSubjects tests" << std::endl;
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	
	delete j;  // Should not create a leak
    delete i;
}

return 0;
}