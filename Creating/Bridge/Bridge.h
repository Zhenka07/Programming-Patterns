#include <string>
#include <memory>
#include <iostream>


struct Theme {
    virtual std::string GetColor() = 0;
};

struct Dark : public Theme {
    std::string GetColor() override {
        return "DarkTheme";
    }
};

struct White : public Theme {
    std::string GetColor() override {
        return "WhiteTheme";
    }
};

struct Blue : public Theme {
    std::string GetColor() override {
        return "BlueTheme";
    }
};

struct Web {
    virtual std::string GetInfo() = 0;
};

struct About : public Web {

    std::shared_ptr<Theme> theme_;

    About(std::shared_ptr<Theme>& th) 
        : theme_ {th}
        {}

    std::string GetInfo() override {
        return "I'm About with" + theme_->GetColor();
    }
};

struct Project : public Web {
    std::shared_ptr<Theme> theme_;

    Project(std::shared_ptr<Theme>& th) 
        : theme_ {th}
        {}

    std::string GetInfo() override {
        return "I'm Project with" + theme_->GetColor();
    }
};

struct Carrers : public Web {
    std::shared_ptr<Theme> theme_;

    Carrers(std::shared_ptr<Theme>& th) 
        : theme_ {th}
        {}

    std::string GetInfo() override {
        return "I'm Carrers with" + theme_->GetColor();
    }
};


