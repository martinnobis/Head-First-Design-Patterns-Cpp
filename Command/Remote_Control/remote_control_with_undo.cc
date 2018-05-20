#include <iostream>

#include "remote_control_with_undo.h"
#include "no_command.h"

#include "command.h"

RemoteControlWithUndo::RemoteControlWithUndo()
{
    std::shared_ptr<Command> no_command = std::make_shared<NoCommand>();
    for (int i = 0; i < 7; i++)
    {
        on_commands_.push_back(no_command);
        off_commands_.push_back(no_command);
    }
    undo_command_ = no_command;
}

void RemoteControlWithUndo::SetCommand(int slot, std::shared_ptr<Command> on_command, std::shared_ptr<Command> off_command)
{
    on_commands_.at(slot) = on_command;
    off_commands_.at(slot) = off_command;
}

void RemoteControlWithUndo::OnButtonWasPushed(int slot)
{
    on_commands_.at(slot)->Execute();
    undo_command_ = on_commands_.at(slot);
}

void RemoteControlWithUndo::OffButtonWasPushed(int slot)
{
    off_commands_.at(slot)->Execute();
    undo_command_ = on_commands_.at(slot);
}

void RemoteControlWithUndo::UndoButtonWasPushed(void)
{
    undo_command_->Undo();
}

std::ostream &operator<<(std::ostream &stream, const RemoteControlWithUndo &remote) {
    stream << "------- Remote Control -------";
    for (int i = 0; i < 7; i++)
    {
        stream << std::endl << "[slot " << i << "] " << remote.on_commands_.at(i)->get_name_() << " \t" <<
        remote.off_commands_.at(i)->get_name_();
    }
    stream << std::endl << "[undo] " << remote.undo_command_->get_name_();
    return stream;
}
