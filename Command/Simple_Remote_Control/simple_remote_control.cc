#include "simple_remote_control.h"

void SimpleRemoteControl::SetCommand(std::shared_ptr<Command> command)
{
    slot_ = command;
}

void SimpleRemoteControl::ButtonWasPressed(void) const
{
    slot_->Execute();
}
