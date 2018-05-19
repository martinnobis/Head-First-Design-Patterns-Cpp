#ifndef _SIMPLE_REMOTE_CONTROL_H_
#define _SIMPLE_REMOTE_CONTROL_H_

#include <memory>

#include "command.h"

class SimpleRemoteControl {
    public:
    void SetCommand(std::shared_ptr<Command>);
    void ButtonWasPressed(void) const;
    private:
    // A pointer instead of a reference as you have to initialise references
    // in the constructor, here we want to use the SetCommand() method instead.
    std::shared_ptr<Command> slot_;
};

#endif  // _SIMPLE_REMOTE_CONTROL_H_
