#ifndef _MACRO_COMMAND_H_
#define _MACRO_COMMAND_H_

#include <vector>
#include <memory>

#include "command.h"

class MacroCommand : public Command
{
public:
  MacroCommand(std::vector<std::shared_ptr<Command>> commands);
  void Execute(void) const;
  void Undo(void) const;

private:
  std::vector<std::shared_ptr<Command>> commands_;
};

#endif // _MACRO_COMMAND_H_
