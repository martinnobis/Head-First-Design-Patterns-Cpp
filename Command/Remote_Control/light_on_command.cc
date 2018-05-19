#include "light_on_command.h"

void LightOnCommand::Execute(void) const {
    light_.On();
}
