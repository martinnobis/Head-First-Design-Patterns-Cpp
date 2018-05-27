#include <iostream>

#include "remote_control_with_lambda.h"

RemoteControlWithLambda::RemoteControlWithLambda()
{
    for (int i = 0; i < 7; i++)
    {
        on_commands_.push_back([]() {
            return;
        });
        off_commands_.push_back([]() {
            return;
        });
    }
}

void RemoteControlWithLambda::SetCommand(int slot, std::function<void()> on_command, std::function<void()> off_command)
{
    on_commands_.at(slot) = on_command;
    off_commands_.at(slot) = off_command;
}

void RemoteControlWithLambda::OnButtonWasPushed(int slot) const
{
    on_commands_.at(slot)();
}

void RemoteControlWithLambda::OffButtonWasPushed(int slot) const
{
    off_commands_.at(slot)();
}

std::ostream &operator<<(std::ostream &stream, const RemoteControlWithLambda &remote)
{
    stream << "------- Remote Control -------";
    for (int i = 0; i < 7; i++)
    {
        // Lambda commands don't have a name field, so this isn't implemented.
    }
    return stream;
}
