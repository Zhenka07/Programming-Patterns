#include <iostream>
#include "SimpleFactory.h"
#include <memory>

int main() {
    std::shared_ptr<Door> door = DoorFactory::CreateDoor(100, 200);
    std::cout << "width = " << door->GetWidth() << std::endl;
    std::cout << "height = " << door->GetHeight() << std::endl;
}