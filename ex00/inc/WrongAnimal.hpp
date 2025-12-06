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
	
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);

		void printWrongAnimal();

		std::string getType() const;
		void		setType(std::string type);

		void	makeSound() const;

	protected:
		std::string _type;
};
