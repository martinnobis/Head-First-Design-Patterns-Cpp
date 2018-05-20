#ifndef _STEREO_SET_DVD_COMMAND_H_
#define _STEREO_SET_DVD_COMMAND_H_

#include "../command.h"
#include "stereo.h"

class StereoSetDvdCommand : public Command {
    public:
    StereoSetDvdCommand(Stereo stereo) : Command("StereoSetDvd"), stereo_(stereo) {}
    void Execute(void) const;

    private:
    Stereo stereo_;
};

#endif  // _STEREO_SET_DVD_COMMAND_H_
