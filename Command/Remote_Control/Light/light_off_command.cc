#include "light_off_command.h"

void LightOffCommand::Execute(void) const {
    light_.Off();
}

void LightOffCommand::Undo(void) const {
    light_.On();
}
