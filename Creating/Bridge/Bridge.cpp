#include "Bridge.h"
#include <memory>

int main() {
    std::shared_ptr<Theme> theme = std::make_shared<Dark>();

    std::shared_ptr<Web> web = std::make_shared<About>(theme); //
    std::shared_ptr<Web> web2 = std::make_shared<Carrers>(theme);
    std::shared_ptr<Web> web3 = std::make_shared<Project>(theme);

    std::cout << web->GetInfo() << std::endl; // I'm About withDarkTheme
    std::cout << web2->GetInfo() << std::endl; // I'm Carrers withDarkTheme
    std::cout << web3->GetInfo() << std::endl; // I'm Project withDarkTheme

    
}