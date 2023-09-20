/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:21:14 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 10:43:15 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* k = new Animal();

    j->makeSound();
    i->makeSound();
    k->makeSound();
    j->getBrain()->printIdeas();

    const WrongAnimal* wrongAnimal = new WrongCat();
    const WrongAnimal* wrongAnimal2 = new WrongAnimal();

    wrongAnimal->makeSound();
    wrongAnimal2->makeSound();
    
    delete j;
    delete i;
    delete k;
    delete wrongAnimal;
    delete wrongAnimal2;
    
    return 0; 

}