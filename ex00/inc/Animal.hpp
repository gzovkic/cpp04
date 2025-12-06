#pragma once

#include "Colors.hpp"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
	
		Animal(std::string name);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

		void printAnimal();

		std::string getType() const;
		void		setType(std::string type);

		virtual void	makeSound() const;

	protected:
		std::string _type;
};
