#include <iostream>
#include <memory>

struct Interviewer {
    virtual void AskQuestions() = 0;
};

struct Developer : public Interviewer {
    void AskQuestions() override {
        std::cout << "I am Developer" << std::endl;
    };
};

struct Community : public Interviewer {
    void AskQuestions() override {
        std::cout << "I am Community" << std::endl;
    };
};


struct HR {
    virtual std::shared_ptr<Interviewer> MakeInterviewer() = 0;

    void TakeInterview() {
        auto I = MakeInterviewer();
        I->AskQuestions();
    }
};

struct DevelopmentManager : public HR {
    std::shared_ptr<Interviewer> MakeInterviewer() override {
        return std::make_shared<Developer>();
    }
};

struct CommunityManager : public HR {
    std::shared_ptr<Interviewer> MakeInterviewer() override {
        return std::make_shared<Community>();
    }
};


void HRsay(std::shared_ptr<HR> hr) {
    hr->TakeInterview();
}