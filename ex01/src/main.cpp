#include "Colors.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << YELLOW << "=== BRAIN DEEP COPY TEST ===" << RESET << std::endl;
    {
        std::cout << CYAN << "\n--- Creating dog1 and dog2 (copy constructor) ---" << RESET << std::endl;
        Dog dog1;
        dog1.printBrain();
        
        std::cout << CYAN << "\n--- Creating dog2 from dog1 (copy constructor) ---" << RESET << std::endl;
        Dog dog2(dog1);
        dog2.printBrain();
        
        std::cout << CYAN << "\n--- Modifying dog1's brain ---" << RESET << std::endl;
        dog1.setIdea(0, "I like bones");
        dog1.setIdea(1, "I love my master");
        dog1.printBrain();
        
        std::cout << CYAN << "\n--- Checking dog2's brain (should be different) ---" << RESET << std::endl;
        dog2.printBrain();
        
        std::cout << CYAN << "\n[Exiting scope: dog1 and dog2 destructors]" << RESET << std::endl;
    }

    std::cout << YELLOW << "\n=== CAT ASSIGNMENT OPERATOR TEST ===" << RESET << std::endl;
    {
        std::cout << CYAN << "\n--- Creating cat1 and cat2 ---" << RESET << std::endl;
        Cat cat1;
        Cat cat2;
        
        std::cout << CYAN << "\n--- cat1 brain before assignment ---" << RESET << std::endl;
        cat1.printBrain();
        
        std::cout << CYAN << "\n--- Setting cat2's brain ideas ---" << RESET << std::endl;
        cat2.setIdea(0, "Meow meow meow");
        cat2.setIdea(1, "I hate dogs");
        cat2.printBrain();
        
        std::cout << CYAN << "\n--- Assigning cat2 to cat1 (copy assignment) ---" << RESET << std::endl;
        cat1 = cat2;
        
        std::cout << CYAN << "\n--- cat1 brain after assignment ---" << RESET << std::endl;
        cat1.printBrain();
        
        std::cout << CYAN << "\n--- Modifying cat2's brain ---" << RESET << std::endl;
        cat2.setIdea(2, "Changed!");
        cat2.printBrain();
        
        std::cout << CYAN << "\n--- cat1's brain (should NOT be changed) ---" << RESET << std::endl;
        cat1.printBrain();
        
        std::cout << CYAN << "\n[Exiting scope: cat1 and cat2 destructors]" << RESET << std::endl;
    }

    std::cout << YELLOW << "\n=== POLYMORPHIC ARRAY WITH BRAIN ===" << RESET << std::endl;
    {
        const int N = 4;
        Animal* zoo[N];
        
        std::cout << CYAN << "\n--- Creating mixed zoo ---" << RESET << std::endl;
        for (int i = 0; i < N; ++i)
        {
            if (i % 2 == 0)
                zoo[i] = new Dog();
            else
                zoo[i] = new Cat();
        }
        
        std::cout << CYAN << "\n--- Testing makeSound() ---" << RESET << std::endl;
        for (int i = 0; i < N; ++i)
        {
            std::cout << CYAN << "zoo[" << i << "] type: " << RESET << zoo[i]->getType() << " -> ";
            if (i % 2 == 0)
                std::cout << GREEN;
            else
                std::cout << MAGENTA;
            zoo[i]->makeSound();
            std::cout << RESET;
        }
        
        std::cout << CYAN << "\n[Cleaning up zoo: destructors called]" << RESET << std::endl;
        for (int i = 0; i < N; ++i)
            delete zoo[i];
    }

    std::cout << YELLOW << "\n=== SELF-ASSIGNMENT TEST ===" << RESET << std::endl;
    {
        std::cout << CYAN << "\n--- Creating dog ---" << RESET << std::endl;
        Dog dog;
        
        std::cout << CYAN << "\n--- Self-assignment (dog = dog) ---" << RESET << std::endl;
        dog = dog;
        
        std::cout << GREEN << "Self-assignment handled correctly!" << RESET << std::endl;
    }

    std::cout << std::endl << YELLOW << "=== ALL TESTS COMPLETED ===" << RESET << std::endl;
    return 0;
}