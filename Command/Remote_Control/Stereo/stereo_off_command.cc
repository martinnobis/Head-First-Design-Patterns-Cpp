#include "stereo_off_command.h"

void StereoOffCommand::Execute(void) const {
    stereo_.Off();
}
