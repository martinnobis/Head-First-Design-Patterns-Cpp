#include "stereo_set_dvd_command.h"

void StereoSetDvdCommand::Execute(void) const
{
    stereo_.SetDvd();
}

void StereoSetDvdCommand::Undo(void) const
{
    stereo_.UnSetDvd();
}
