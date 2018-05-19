#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <string>

class Command {
    public:
    Command(std::string name) : name_(name) { }
    virtual ~Command() { }
    virtual void Execute(void) const = 0;
    std::string get_name_(void) const;

    private:
    std::string name_;
};

#endif  // _COMMAND_H_
