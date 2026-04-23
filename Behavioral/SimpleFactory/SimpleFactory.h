#include <memory>

class Door {
public:
    virtual float GetWidth() const = 0;
    virtual float GetHeight() const = 0; 
};

class MetalDoor : public Door {
    float Height_;
    float Width_;

public:

    MetalDoor(float h, float w) 
        : Height_ {h}
        , Width_ {w}
            {}

    float GetWidth() const override {
        return Width_;
    }

    float GetHeight() const override {
        return Height_;
    }
    
};


struct DoorFactory {
    static std::shared_ptr<Door> CreateDoor(float h, float w) {
        return std::make_shared<MetalDoor>(h, w);
    }
};