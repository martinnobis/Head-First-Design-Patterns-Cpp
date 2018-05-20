#include "stereo_set_dvd_command.h"

void StereoOnCommand::Execute(void) const {
    stereo_.SetDvd();
}
