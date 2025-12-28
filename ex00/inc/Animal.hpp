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
	
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

		std::string getType() const;

		virtual void	makeSound() const;

	protected:
		std::string _type;
};
