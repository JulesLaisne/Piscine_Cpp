/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:21:14 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/08/28 16:49:01 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {
    
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *animal = new WrongAnimal();
    const WrongAnimal *cat = new WrongCat();

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "Wrong Type: " << animal->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << cat->getType() << " " << std::endl;
    animal->makeSound();
    cat->makeSound();

    delete i;
    delete j;
    delete meta;
    delete animal;
    delete cat;

    return 0; 

}