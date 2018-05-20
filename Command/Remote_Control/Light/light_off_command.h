#ifndef _LIGHT_OFF_COMMAND_H_
#define _LIGHT_OFF_COMMAND_H_

#include "../command.h"
#include "light.h"

class LightOffCommand : public Command
{
  public:
    LightOffCommand(Light light) : Command("LightOff"), light_(light) {}
    void Execute(void) const;

  private:
    Light light_;
};

#endif // _LIGHT_OFF_COMMAND_H_
