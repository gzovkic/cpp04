#pragma once

#include "Colors.hpp"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
	
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);

		std::string getType() const;

		void	makeSound() const;

	protected:
		std::string _type;
};
