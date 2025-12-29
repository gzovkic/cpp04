#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
	
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		
		void makeSound() const override;
		Brain& getBrain();
		
	private:
		Brain *_brain;
};