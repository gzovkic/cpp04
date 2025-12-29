#include "Colors.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// Creating ArrayOfAnimals
	std::cout	<< YELLOW << "=== Creating ArrayOfAnimals ===" 
				<< RESET << std::endl;
	Animal **ArrayOfAnimals = new Animal*[100];
	for(int i = 0; i < 50 ; i++)
	{
		std::cout	<< YELLOW << "\n=== Creating Dog on Index " << i << " ===" 
					<< RESET << std::endl;
		ArrayOfAnimals[i] = new Dog();
	}
	for(int i = 50; i < 100 ; i++)
	{
		std::cout	<< YELLOW << "\n=== Creating Cat on Index " << i << " ===" 
					<< RESET << std::endl;
		ArrayOfAnimals[i] = new Cat();
	}
	// Creating ArrayOfAnimals

	std::cout		<< YELLOW << "\n=== Useing the Makesound function ===" 
					<< RESET << std::endl;
	for(int i = 0; i < 100; i++)
		ArrayOfAnimals[i]->makeSound();

	//Copy testing
	Dog test;
	test.getBrain().setIdea("test", 0);
	{
		std::cout << "[Entering Scope]" << std::endl;
        Dog tmp = test; // Copy Constructor
        std::cout << "Copy idea: " << tmp.getBrain().getIdea(0) << std::endl;
        
        tmp.getBrain().setIdea("tmp", 0);
        std::cout << "Copy idea changed to: " << tmp.getBrain().getIdea(0) << std::endl;
        std::cout << "[Exiting Scope]" << std::endl;
    } 

    std::cout	<< "Original idea after copy destruction: " << test.getBrain().getIdea(0) 
				<< std::endl;

	//Copy testing

	// deleting ArrayOfAnimals
	for(int i = 0; i < 100 ; i++)
	{
		std::cout	<< YELLOW << "\n=== Deleting Animal number " << i << " ===" 
					<< RESET << std::endl;
		delete ArrayOfAnimals[i];
	}
	delete[] ArrayOfAnimals;
	// deleting ArrayOfAnimals
	return 0;
}