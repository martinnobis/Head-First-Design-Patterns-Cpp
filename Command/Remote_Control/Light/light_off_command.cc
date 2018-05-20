#include "light_off_command.h"

void LightOffCommand::Execute(void) const {
    light_.Off();
}
