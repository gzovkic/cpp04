#pragma once

#include "Colors.hpp"

class Brain
{
	public:
		Brain();
		~Brain();
	
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		
		std::string getIdea(int index);
		void setIdea(int index, std::string& idea);

		void printBrain(void);

	private:
		std::string _ideas[100];
};