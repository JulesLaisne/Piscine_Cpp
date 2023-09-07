/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:53:34 by jlaisne           #+#    #+#             */
/*   Updated: 2023/09/06 13:44:59 by jlaisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"

int main( void )
{
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // me->equip(tmp);
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;

    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    AMateria* tmp;    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    std::cout << "\n========== USE ==========\n" << std::endl;
    ICharacter* Stockton = new Character("Stockton");
    std::cout << std::endl;
    me->use(0, *Stockton);
    std::cout << std::endl;
    me->use(1, *Stockton);
    std::cout << std::endl;
    me->use(2, *Stockton);
    std::cout << std::endl;
    me->use(3, *Stockton);
    std::cout << std::endl;

    std::cout << "\n========== EQUIP ==========\n" << std::endl;
    ICharacter* Alfred = new Character("Alfred");
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("cure"));

    std::cout << "\n========== UNEQUIP ==========\n" << std::endl;
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    me->unequip(4);
    me->equip(src->createMateria("cure"));
	me->equip(NULL);
	me->equip(src->createMateria("cure"));
    me->use(0, *Alfred);
	me->use(1, *Alfred); 
    me->use(2, *Alfred);
    me->use(3, *Alfred);

    std::cout << std::endl;
    std::cout << "OK" << std::endl;

    delete Stockton;
    delete Alfred;
    delete me;
    delete src;
    return 0;
}