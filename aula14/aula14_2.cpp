#include <iostream>

class Animal {
public:
    void respirar() {
        std::cout << "Respiro como um animal." << std::endl;
    }
};

class Reptil {
public:
    void rastejar() {
        std::cout << "Rastejo como um reptil." << std::endl;
    }
};

class Cobra : public Animal, public Reptil {
public:
    void respirar() {
        std::cout << "Respiro como uma cobra." << std::endl;
    }
};

int main() {
    Cobra cobra;

    cobra.respirar();          // chama a função da Cobra
    cobra.Animal::respirar();  // chama a função da Animal
    cobra.rastejar();          // chama a função da Reptil

    return 0;
}