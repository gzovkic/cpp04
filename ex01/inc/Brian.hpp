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

    private:
        std::string ideas[100];
};