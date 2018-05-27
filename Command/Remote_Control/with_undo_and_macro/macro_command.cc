#include <algorithm>

#include "macro_command.h"

MacroCommand::MacroCommand(std::vector<std::shared_ptr<Command>> commands) : Command("MacroCommand"), commands_(commands) {}

void MacroCommand::Execute(void) const
{
    std::for_each(commands_.begin(), commands_.end(), [](const std::shared_ptr<Command> &c) {
        c->Execute();
    });
}

void MacroCommand::Undo(void) const
{
    std::for_each(commands_.begin(), commands_.end(), [](const std::shared_ptr<Command> &c) {
        c->Undo();
    });
}