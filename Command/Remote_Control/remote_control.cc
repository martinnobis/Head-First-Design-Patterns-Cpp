#include <iostream>

#include "remote_control.h"
#include "no_command.h"

#include "command.h"

RemoteControl::RemoteControl()
{
    std::shared_ptr<Command> no_command = std::make_shared<NoCommand>();
    for (int i = 0; i < 7; i++)
    {
        on_commands_.push_back(no_command);
        off_commands_.push_back(no_command);
    }
}

void RemoteControl::SetCommand(int slot, std::shared_ptr<Command> on_command, std::shared_ptr<Command> off_command)
{
    on_commands_.at(slot) = on_command;
    off_commands_.at(slot) = off_command;
}

void RemoteControl::OnButtonWasPushed(int slot) const
{
    on_commands_.at(slot)->Execute();
}

void RemoteControl::OffButtonWasPushed(int slot) const
{
    off_commands_.at(slot)->Execute();
}

std::ostream &operator<<(std::ostream &stream, const RemoteControl &remote) {
    stream << "------- Remote Control -------";
    for (int i = 0; i < 7; i++)
    {
        stream << std::endl << "[slot " << i << "] " << remote.on_commands_.at(i)->get_name_() << " \t" <<
        remote.off_commands_.at(i)->get_name_();
    }
    return stream;
}
