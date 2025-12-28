#include <iostream>
#include "Colors.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << YELLOW << "=== SIMPLE POLYMORPHISM (virtual) ===" << RESET << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout	<< CYAN << "[Animal]\ttype: " << RESET << animal->getType() 
				<< std::endl;
	std::cout << GREEN; animal->makeSound(); std::cout << RESET;

	std::cout	<< CYAN << "[Dog]\t\ttype: " << RESET << dog->getType() 
				<< std::endl;
	std::cout << MAGENTA; dog->makeSound(); std::cout << RESET;

	std::cout 	<< CYAN << "[Cat]\t\ttype: " << RESET << cat->getType() 
				<< std::endl;
	std::cout << BLUE; cat->makeSound(); std::cout << RESET;

	delete animal;
	delete dog;
	delete cat;

	std::cout	<< std::endl << YELLOW << "=== WRONG ANIMAL (no virtual) ==="
				<< RESET << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << CYAN << "[WrongAnimal]\ttype: " << RESET << wa->getType() << " -> " << GREEN;
	wa->makeSound(); std::cout << RESET;

	std::cout << CYAN << "[WrongCat]\ttype: " << RESET << wc->getType() << " -> " << MAGENTA;
	wc->makeSound();
	std::cout << RESET;

	delete wa;
	delete wc;

	std::cout	<< std::endl << YELLOW << "=== DONE ===" << RESET 
				<< std::endl;
	return 0;
}