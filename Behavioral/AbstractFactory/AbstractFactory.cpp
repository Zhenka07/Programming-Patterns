#include <memory>
#include <iostream>
#include "AbstractFactory.h"

void Build(std::shared_ptr<AbstractFactory> ab) {
    std::cout << ab->FindExpert()->ExpertDescription() << ' ';
    std::cout << ab->MakeDoor()->MakeDoor() << std::endl;
}

int main() {
    Build(std::make_shared<WoodenFabric>()); 
        // I'm a wood materials expert. I'm a wooden door.
    Build(std::make_shared<MetalFabric>()); 
        // I'm a metal materials expert. I'm a metal door.
}