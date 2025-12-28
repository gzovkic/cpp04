#pragma once

#include "Colors.hpp"

class Animal
{
	public:
		Animal();
		virtual ~Animal();
	
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

		std::string getType() const;

		virtual void	makeSound() const;

	protected:
		std::string _type;
};
