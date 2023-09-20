/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:21:14 by juleslaisne       #+#    #+#             */
/*   Updated: 2023/09/20 10:51:32 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {
    
    const Animal* dog = new Dog();
    dog->makeSound();

    const Animal* cat = new Cat();
    cat->makeSound();
        
    delete dog;
    delete cat;

    Dog tmp;
    Dog basic = tmp;

    basic.getBrain()->printIdeas();

    // const Animal* j = new Animal();
    // j->makeSound();

    return 0;
}