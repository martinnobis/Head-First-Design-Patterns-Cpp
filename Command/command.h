#ifndef _COMMAND_H_
#define _COMMAND_H_

class Command {
    public:
    virtual void Execute(void) const = 0;
};

#endif  // _COMMAND_H_
