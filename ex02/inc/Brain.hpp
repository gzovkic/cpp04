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
        void        setIdea(std::string idea, int index);
    private:
        std::string _ideas[100];
};