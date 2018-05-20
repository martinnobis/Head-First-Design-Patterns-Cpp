#include "stereo_on_command.h"

void StereoOnCommand::Execute(void) const {
    stereo_.On();
}

void StereoOnCommand::Undo(void) const {
    stereo_.Off();
}