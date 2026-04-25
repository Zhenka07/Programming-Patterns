#include <string>
#include <memory>

struct Door {
    virtual std::string MakeDoor() = 0;
};

struct WoodenDoor : public Door {
    virtual std::string MakeDoor() override {
        return "I'm a wooden door.";
    }
};


struct MetalDoor : public Door {
    virtual std::string MakeDoor() override {
        return "I'm a metal door.";
    }
};

struct Expert {
    virtual std::string ExpertDescription() = 0;
};

struct WoodExpert : public Expert {
    std::string ExpertDescription() override {
        return "I'm a wood materials expert.";
    }
};


struct MetalExpert : public Expert {
    std::string ExpertDescription() override {
        return "I'm a metal materials expert.";
    }
};

struct AbstractFactory {
    virtual std::shared_ptr<Door> MakeDoor() = 0;
    virtual std::shared_ptr<Expert> FindExpert() = 0;
};

struct WoodenFabric : public AbstractFactory {
    std::shared_ptr<Door> MakeDoor() override {
        return std::make_shared<WoodenDoor>();
    }

    std::shared_ptr<Expert> FindExpert() override {
        return std::make_shared<WoodExpert>();
    }
};

struct MetalFabric : public AbstractFactory {
    std::shared_ptr<Door> MakeDoor() override {
        return std::make_shared<MetalDoor>();
    }

    std::shared_ptr<Expert> FindExpert() override {
        return std::make_shared<MetalExpert>();
    }
};