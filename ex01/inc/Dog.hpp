#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
	
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		
		void makeSound() const override;

	private:
		Brain* _brain;
};