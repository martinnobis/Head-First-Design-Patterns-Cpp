#ifndef _STEREO_ON_COMMAND_H_
#define _STEREO_ON_COMMAND_H_

#include "../command.h"
#include "stereo.h"

class StereoOnCommand : public Command {
    public:
    StereoOnCommand(Stereo stereo) : Command("StereoOn"), stereo_(stereo) {}
    void Execute(void) const;
    void Undo(void) const;

    private:
    Stereo stereo_;
};

#endif  // _STEREO_ON_COMMAND_H_
