#ifndef _STEREO_OFF_COMMAND_H_
#define _STEREO_OFF_COMMAND_H_

#include "../command.h"
#include "stereo.h"

class StereoOffCommand : public Command
{
  public:
    StereoOffCommand(Stereo stereo) : Command("StereoOff"), stereo_(stereo) {}
    void Execute(void) const;

  private:
    Stereo stereo_;
};

#endif // _STEREO_OFF_COMMAND_H_
