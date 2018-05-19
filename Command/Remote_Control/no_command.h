#ifndef _NO_COMMAND_H_
#define _NO_COMMAND_H_

#include "command.h"

class NoCommand : public Command
{
  public:
    NoCommand() : Command("NoCommand") { }
    void Execute(void) const;
};

#endif // _NO_COMMAND_H_
