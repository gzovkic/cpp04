#include "Colors.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
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
	// CreatingArrayOfAnimals



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