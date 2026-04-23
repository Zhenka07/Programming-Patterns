#include "FactoryMethod.h"

int main() {
    auto devManager = std::make_shared<DevelopmentManager>();
    auto comManager = std::make_shared<CommunityManager>();
    HRsay(devManager); // "I am Developer"
    HRsay(comManager); // "I am Community"
}